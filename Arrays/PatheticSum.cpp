#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
const int N=105;
vector<int> graph[N];

int nums[N];
void dfs(int u,int p){
    nums[u]=(nums[p] & 1)?2:1;
    for(auto v:graph[u]){
        if(v!=p){
              dfs(v,u);
          }
    }
}

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
       graph[u].push_back(v);
       graph[v].push_back(u);
            }
            nums[0]=1;
            dfs(1,0);
            for(int i=1;i<=n;i++){
                cout<<nums[i]<<" ";
            }
            cout<<"\n";
            for(int i=0;i<=n;i++){
                graph[i].clear();
            }
}


int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
int test;
cin>>test;
while(test--!=0){
solve();
}

}