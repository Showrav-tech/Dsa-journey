#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
   int k;
   cin>>k;
   int s=0;
   for(int i=0;i<n;i++){
       int sum=0;
     for(int j=i;j<n;j++){
        sum+=v[j];
        if(sum==k){
            s++;
        }
     }  
   }
   cout<<s;

    return 0;
}