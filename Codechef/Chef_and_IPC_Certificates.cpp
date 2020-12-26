#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count=0;
    long long int  n,m,k;
    cin>>n>>m>>k;
  
    for(int s=0;s<n;s++){
     int input;int sum=0;
    for(int i=0;i<k;i++){
        cin>>input;
        sum+=input;
    }
    int q;cin>>q;

    if(q<=10 && sum>=m)
        count++;
}
cout<<count;

}
