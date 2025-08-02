#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<int> nums(2 * n); 

  
    for (int i = 0; i < 2 * n; ++i) {
        cin >> nums[i];
    }

    vector<int> result(2 * n); 

   
    for (int i = 0; i < n; ++i) {
        result[2 * i] = nums[i];       
        result[2 * i + 1] = nums[i + n];
    }

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

