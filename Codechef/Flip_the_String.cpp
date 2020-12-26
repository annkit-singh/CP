
#include <bits/stdc++.h>
using namespace std;
         
using ll = long long;
     
#define all(x) (x).begin(),(x).end()
#define ar array
         
const ll M = 1e9+7; 

void solve(){
        string a,b; cin>>a>>b;
        int n = a.size();
        if(a==b){
                cout<<0<<"\n";
                return;
        }
        bool b1=false;
        bool b2=false;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            b1==((i%2==0)&&(a[i]==b[i]))?false  :   true;
                // if((i%2==0)&&(a[i]==b[i])){
                //         b1 = false;
                // }


                if((i%2==0)&&(a[i]!=b[i])){
                        if(b1==false){
                                cnt1++;
                                b1 = true;
                        }
                }

                if((i%2==1)&&(a[i]==b[i])){
                        b2 = false;
                }
                if((i%2==1)&&(a[i]!=b[i])){
                        if(b2==false){
                                cnt2++;
                                b2 = true;
                        }
                }
        }
        ll res = cnt1 + cnt2;
        cout<<(res)<<"\n";

}

int main(){
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
     
                
        int t; cin>>t;
        while(t--)
                solve();
         
        return 0;
}