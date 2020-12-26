#include <bits/stdc++.h>
using namespace std;
#define m 1000000007 
int main(){
     long long int t;cin>>t;
    while(t--!=0){
         long long int n;cin>>n;
         long long int result=pow(n,3)+abs(pow((1-n),2));
        cout<<result%m<<endl;
    }
}