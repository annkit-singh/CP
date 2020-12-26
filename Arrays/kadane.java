#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--!=0){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int currentSum=0;
        int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum=currentSum+arr[i];
        if(currentSum>maxSum){
            maxSum=currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout<<maxSum;


    }
}