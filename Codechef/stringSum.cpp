#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--!=0){
    string st;
    cin>>st;
    int n=st.size();
    char ar[n];
    int sum=0;
    strcpy(ar,st.c_str());
    int mul=(ar[0]-96)*100;
    for(int i=0;i<n;i++){
        int val=ar[i]-97;
        sum+=   mul+val;

    }
    cout<<sum<<endl;
    }


}