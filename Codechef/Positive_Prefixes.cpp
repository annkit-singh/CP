#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--!=0){
        int n,k;
        cin>>n>>k;
        int array[n];
        for(int i=1;i<=n;i++){
            if(i%2!=0)
            array[i-1]=-1*i;
            else
                array[i-1]=i;  
        }
        int cP=n/2;
        while(k!=cP){
            if(k<cP){
                for(int j=n-1;j>=0;j--){
                    if(array[j]>0){
                        array[j]=-1*array[j];
                        cP--;
                        if(cP==k)
                            break;
                    }
                }
            }
            // else if(k>cP){
            else{ 
            for (int j = n - 1; j >= 0; j--)
                {
                    if (array[j] < 0)
                    {
                        array[j] = -1 * array[j];
                        cP++;
                        if (cP == k)
                            break;
                    }
                }
            }
        }
        for(int ele:array){
            cout<<ele<<" ";
        }

    }

}
   
