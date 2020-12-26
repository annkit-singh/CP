#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ,x,p,k; 
   cin>>n>>x>>p>>k;
    p--;
    k--;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
sort(arr.begin(),arr.end());
    if(k==p){
        if(x==arr[p]){
            cout<<0<<"\n";
        }

       else  if(x>arr[p]){
            int i=p;
            int dist=0;
            while(x>arr[i]){
                dist++;
                if(i<n-1)
                 i++;
                else
                 break;
            }
            cout<<dist<<"\n";
        }
        else {
            int i=p;
            int dist=0;
            while(x<arr[i]){
                dist++;
                if(i>0) 
                i--;
                else
                 break;
            }
            cout<<dist<<"\n";
        }

    }
    else if(k>p){
        if(x>arr[p]) cout<<-1<<"\n";
        else
        {
            int i = p;
            int dist = 0;
            while (x < arr[i])
            {
                dist++;
                if (i >0)
                    i--;
                else
                    break;
            }
            cout << dist << "\n";
        }
    }
    else{
        if(x<arr[p]) cout<<-1<<"\n";
        else {
            int i = p;
            int dist = 0;
            while (x > arr[i])
            {
                dist++;
                if (i < n - 1)
                    i++;
                else
                    break;
            }
            cout << dist << "\n";
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>t;
    while(t--!=0){
       solve();
    }
       
   
    return 0;
}