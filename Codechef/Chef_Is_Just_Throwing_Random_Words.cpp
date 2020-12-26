#include <bits/stdc++.h>
#define boost ios_base ::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
    boost;
    int t;
    cin>>t;
    while(t--!=0){
        long long n;cin>>n;
        long long ans=0,sum=0;
        while(n--!=0){
            long num;
            cin>>num;
            ans|=num;
            sum+=num;
            ans|=sum;
            
        }
        cout<<ans<<"\n";


    }
   


}