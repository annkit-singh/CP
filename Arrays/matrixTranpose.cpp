#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n;cin>>n;
    int n=3;
    int matrix[n][n]={{3,2,1},
                      {2,6,4},
                      {1,9,5}};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp= matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



}