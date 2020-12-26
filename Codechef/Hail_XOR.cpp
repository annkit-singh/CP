#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    long long int t,o,r,y;
    bool w=false;
    cin>>t;
    while(t--!=0){  
         int n,k;
        cin>>n>>k;
        int arr[n];
        for(long long int i=0;i<n;i++)
            cin>>arr[i];

            int i=0;
        for(long long int g=k;g>0 && i<n-1;g--){  //for steps
            w=0;
            long long int p=log(arr[i])/log(2);
            r=pow(2,p);
            arr[i]=arr[i]^r;
            for(long long int j=i+1;j<n;j++){ //for different values of p
                if((arr[j]^r) < arr[j]){
                    arr[j]=arr[j]^r;
                    w=true;
                    break;

                }
            }
            if(!w){
                arr[n-1]^=r;
            }
            while(arr[i]<=0)
            i++;   // this is to reach at break point
            
            o=g+1;
        }
        if(o>0){
            if(n<3 && o%2>0){
                arr[n-2]^=1;
                arr[n-1]^=1;
            }
        }
        int count=0;
        for(auto ele:arr){
            cout<<ele<<" ";
            count++;
            if(count==n){
                break;
            }
        }
    }



}