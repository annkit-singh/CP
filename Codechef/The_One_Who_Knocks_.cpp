#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;cin>>t;
    while(t--!=0){
        int x,y;cin>>x>>y;

        if(x>y){
            int result=(x-y)%2==0?1:2;
            cout<<result;
        }
        else if(y>x){
            int result=((x-y)%2==0)?(   (x-y)/2%2==0)?3:2    :1;
        cout<<result;

                 
        else{
            cout<<0;
        }
        cout<<endl;
    }

}