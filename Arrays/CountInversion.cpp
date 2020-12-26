#include <bits/stdc++.h>
using namespace std;

int merge(int array[],int temp[],int l,int r,int m){
    int i=l;int j=m;int k=l;int inv_c=0;
    while(i<m && j<=r ){
        if(array[i]<array[j]){
            temp[k++]=array[i++];
        }
        else{
            temp[k++] = array[j++];
            inv_c+=m-i;
        }
    }
        while(i<m){
            temp[k++]=array[i++];
        }
        while(j<=r){
            temp[k++]=array[j++];
        }
        for( i=l;i<=r;i++){
            array[i]=temp[i];
        }

    return inv_c;
}
int countInvert(int array[],int temp[],int l,int r){
int inv=0;
if(l<r){
    int mid=l+(r-l)/2;
    inv+= countInvert(array,temp,l,mid);
    inv+= countInvert(array,temp,mid+1,r);
    inv+= merge(array,temp, l,r,mid+1);
}
return inv;
}

int main(){   
    int n;cin>>n;        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }  
        int temp[n];
       cout<<"Total inversions are "<< countInvert(arr,temp,0,n-1)<<endl;
       for(int i:arr){
           cout<<i<<" ->";
       }
    }