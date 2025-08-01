#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];
        if (leftSum == rightSum) {
            cout << i << endl; // print the pivot index
            return 0;
        }
        leftSum += arr[i];
    }

    cout << -1 << endl; // no pivot index found
    return 0;
}
