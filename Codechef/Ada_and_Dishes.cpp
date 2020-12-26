#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b){return a>b;};
int main(){
  int t;cin>>t;
  while(t--!=0){
  int n;cin>>n;
  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }

  if(n==1){
    cout<<array[0];
  }
  else if(n==2){
    cout<<max(array[0],array[1]);
  }
  else{
    sort(array,array+n,compare);
  int one=array[0];int two=array[1]; int result=min(one,two);
  for(int i=2;i<n;i++){
    int diff=abs(one- two);
    one =diff;
    two=array[i];
    result+=(i==n-1)? max(one,two): min(one,two);
  }
  cout<<result;
  }
  cout<<"\n";

  }
}