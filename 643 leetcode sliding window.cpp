#include<bits/stdc++.h>
using namespace std;
class Solution{
double findmaxaverage(vector<int>& nums,int k){
    int sum=0;
    
    for(int i=0;i<k;i++){
        sum+=nums[i]; 
    }
    int currentsum=sum;
    int maxsum=sum;
    for(int i=k;i<nums.size();i++){
        currentsum-=nums[i-k];
        currentsum+=nums[i];
        maxsum=max(maxsum,currentsum);
    }
    return (double)maxsum/k;
}
};

int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int k;
cin>>k;
Solution s;
cout<<setprecision(5)<<s.findmaxaverage(v,k)<<endl;
}