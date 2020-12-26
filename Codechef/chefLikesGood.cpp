#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--!=0){
        int n,q;
        cin>>n>>q;
        int array[n];
        int maxLen=0;
        cin>>array[0];
        for(int i=1;i<n;i++){
            cin >> array[i];
            if(array[i]==array[i-1]){
                maxLen++;
            }
        }
        int pL=n-maxLen;
        while(q--!=0){
           int x,y;cin>>x>>y;
           x-=1;

           if(x+1<n && array[x]!=array[x+1]){
               pL--;
           }

           if(x-1>=0 && array[x]!=array[x-1]){
               pL--;
           }

           array[x]=y;
           if(x+1<n && array[x]!=array[x+1]){
               pL++;
           }
            if(x-1>=0 && array[x]!=array[x-1]) {
               pL++;
           }
           cout<<pL<<"\n";

        
      }
           
    }
}