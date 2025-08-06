#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


int kadaneMaxSum(const vector<int>& arr) {
    int maxSum = arr[0], currSum = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int countZeroSumSubarrays(const vector<int>& arr) {
    unordered_map<int, int> prefixSumCount;
    int sum = 0, count = 0;
    prefixSumCount[0] = 1;

    for (int num : arr) {
        sum += num;
        if (prefixSumCount.count(sum))
            count += prefixSumCount[sum];
        prefixSumCount[sum]++;
    }
    return count;
}


int longestSubarrayWithSumK(const vector<int>& arr, int k) {
    unordered_map<int, int> prefixMap;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
        if (sum == k)
            maxLen = i + 1;
        if (prefixMap.count(sum - k))
            maxLen = max(maxLen, i - prefixMap[sum - k]);
        if (!prefixMap.count(sum))
            prefixMap[sum] = i;
    }
    return maxLen;
}


int longestSubarrayWithEqual01(const vector<int>& arr) {
    unordered_map<int, int> prefixMap;
    int maxLen = 0, sum = 0;

    for (int i = 0; i < arr.size(); ++i) {
        int val = (arr[i] == 0) ? -1 : 1;
        sum += val;
        if (sum == 0)
            maxLen = i + 1;
        if (prefixMap.count(sum))
            maxLen = max(maxLen, i - prefixMap[sum]);
        else
            prefixMap[sum] = i;
    }
    return maxLen;
}


int longestIncreasingSubarray(const vector<int>& arr) {
    if (arr.empty()) return 0;
    int maxLen = 1, currLen = 1;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[i - 1])
            currLen++;
        else
            currLen = 1;
        maxLen = max(maxLen, currLen);
    }
    return maxLen;
}


int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    while (true) {
        cout << "Choose an option:"<<endl;
        cout << "1. Maximum Subarray Sum (Kadane's)"<<endl;
        cout << "2. Count of Subarrays with Sum = 0"<<endl;
        cout << "3. Longest Subarray with Given Sum K"<<endl;
        cout << "4. Longest Subarray with Equal 0s and 1s"<<endl;
        cout << "5. Longest Increasing Subarray"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Choice: "<<endl;

        int choice;
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting..."<<endl;
            break;
        }

        switch (choice) {
            case 1:
                cout << "Maximum Subarray Sum: " << kadaneMaxSum(arr) << "\n";
                break;
            case 2:
                cout << "Count of Subarrays with Sum 0: " << countZeroSumSubarrays(arr) << "\n";
                break;
            case 3: {
                int k;
                cout << "Enter value of K: ";
                cin >> k;
                cout << "Longest Subarray Length with Sum " << k << ": " << longestSubarrayWithSumK(arr, k) << "\n";
                break;
            }
            case 4:
                cout << "Longest Subarray with Equal 0s and 1s: " << longestSubarrayWithEqual01(arr) << "\n";
                break;
            case 5:
                cout << "Longest Increasing Subarray Length: " << longestIncreasingSubarray(arr) << "\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}
