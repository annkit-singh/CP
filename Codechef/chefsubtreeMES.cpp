#include <bits/stdc++.h>
using namespace std;
vector<int> twoVec[100005];

pair<long long,int> dfs(int parent){
    long long mex=0;int size=1;
    for(auto child:twoVec[parent]){
        auto temp=dfs(child);
        mex=max(mex,temp.first);
        size+=temp.second;
    }
    return {mex+size,size};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--!=0){
        int n;cin>>n;
        for(int i=1;i<=n;i++){
            twoVec[i].clear();
        }
        for(int i=2;i<=n;i++){
            int input;cin>>input;
            twoVec[input].push_back(i);

        }
        cout<<dfs(1).first<<"\n";
    }
}