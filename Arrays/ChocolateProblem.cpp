#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--!=0){
    int n;cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int noS;cin>>noS;
    noS-=1;

    std::sort(array,array+n);
    int res=INT_MAX;
    for(int i=0;noS<n;i++){
        int diff=array[noS]-array[i];
        if(diff<res){
            res = diff;
        }
        noS++;
    }
    cout<<res<<"\n";
        }
    }