#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    int i=0;int j=n-1;int target;cin>>target;int flag=false;
    while(i<n && j>=0){
        if(matrix[i][j]==target){
        flag=true;
        break;
        }
        else  if(matrix[i][j]<target)
            i++;
        else
            j--;
    }

    if(flag){
        cout<<"Target is present";
    }
    else {
        cout<<"Target is not present";
    }

}