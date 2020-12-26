#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n;cin>>n;
    int n=4;
    int n1=3;
    int n2=3;
    int n3=3;

    int matrix1[n1][n2]={{3,2,1},
                       {2,6,4},
                       {1,9,5}};
    int matrix2[n2][n3]={{9,2,1},
                         {2,4,3},
                         {2,8,0}};
    int matrix3[n1][n3];
      for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++)
      matrix3[i][j]=0;
        
    }
    

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }   
         }
       }
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++)
           cout<< matrix3[i][j]<<" ";
        
        cout<<endl;
    }


    }

    


