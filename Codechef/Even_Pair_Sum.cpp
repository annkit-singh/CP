#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- != 0)
    {
        unsigned long long int a ,b;
        cin>>a>>b;
        unsigned long long int  even,odd;

        if(a%2==0){
            even=a/2;
            odd=a/2;
        }
        else{
            even=a/2 ;
            odd=a/2+1;
        }

        if(b%2==0){
            even*=b/2;
            odd*=b/2;
        }
        else{
            even*=b/2;
            odd*=b/2+1;
        }
        cout<<even+odd<<"\n";

    }

return 0;
}