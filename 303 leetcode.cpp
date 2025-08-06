#include<bits/stdc++.h>
using namespace std;
class NumArray {
public:
vector<int>p;
    NumArray(vector<int>& nums) {
      int sum=0;
      for(int i=0;i<nums.size();i++){
        sum+=nums[i];
      p.push_back(sum);
      }  
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return p[right];
        }
        else return p[right]-p[left-1];
    }
};
int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray numArray(nums);

    cout << numArray.sumRange(0, 2) << endl; // Output: 1
    cout << numArray.sumRange(2, 5) << endl; // Output: -1
    cout << numArray.sumRange(0, 5) << endl; // Output: -3

    return 0;
}
