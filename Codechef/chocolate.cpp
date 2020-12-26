#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;cin>>t;
   while(t--!=0){
      int n;cin>>n;
    vector<int> array(n,0);
   for(int i=0;i<n;i++){
         cin>>array[i];
      }
      int m;cin>>m;
      sort(array.begin(),array.end());

      int smallP=INT_MAX;

      for(int i=0;i<(n-m);i++){
         int diff=abs(array[i+m-1]-array[i]);
         if(diff<smallP)
          smallP=diff;
      
      }
      cout<<smallP<<"\n";
   }
}