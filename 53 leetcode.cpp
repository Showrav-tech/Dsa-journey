#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxsum=INT_MIN;

for(int st=0;st<n;st++){
    int currentsum=0;
   for(int end=st;end<n;end++){
currentsum+=arr[end];
maxsum=max(currentsum,maxsum);
   } 
}
cout<<"Max subarray sum "<<maxsum<<endl;


}