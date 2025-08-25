#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) cin >> nums[i];

    int l = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {  
            swap(nums[i], nums[l]);
            l++;
        }
    }

    for (int x : nums) cout << x << " ";
    cout << endl;
}
