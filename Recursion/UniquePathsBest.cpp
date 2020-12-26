#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int i,int j,int m,int n,vector<vector<int>> &dp){
    if(i>=m || j>=n) return 0;
    if(i==m-1 && j==n-1) return 1;
    if(dp[i][j] !=  -1)
       return dp[i][j]; 
    else
        return dp[i][j]=uniquePaths(i+1,j,m,n,dp) + uniquePaths(i,j+1,m,n,dp);
}
int uniquePaths(int m,int n){
    vector<vector<int>> vec(m, vector<int>(n, -1));
    return uniquePaths(0,0,m,n,vec);
}


int main(){
    int rows=4;
    int cols=5;
    vector<vector<int>> vec(rows,vector<int>(cols,-1));
   
  cout<<  uniquePaths(3,2);
    cout<<"\n";

    return 0;
}