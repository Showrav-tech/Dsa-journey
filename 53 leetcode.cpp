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
int casesum=0;

for(int i=0;i<n;i++){
 casesum+=arr[i];
 maxsum=max(casesum,maxsum);
 if(casesum<0){
    casesum=0;
 }
}
cout<<"Max subarray sum "<<maxsum<<endl;


}