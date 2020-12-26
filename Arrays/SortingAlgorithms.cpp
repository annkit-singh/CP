#include <bits/stdc++.h>
#include <limits.h>
#include <string>
using namespace std;

void bubbleSort(int array[],int n){
    int counter = 1;
    while (counter < n)
    {
           for (int i = 0; i < n - counter; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
            }
        }
        counter++;
    }
}
void selectionSort(int array[],int n){   
    for(int i=0;i<n;i++){
       
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                swap(array[j],array[i]);
            }
        }
    }
}
void insertionSort(int array[],int n){
    for(int i=1;i<n;i++){
        int curr=array[i];
        int j=i-1;
        while(j>=0 && array[j]>curr){
            array[j+1]=array[j];
            j--;
        }
    j++;
    array[j]=curr;
}
}
int merge(int array[],int l,int r,int m){
    int n1=m-l+1;
    int n2=r-m;
    int inv=0;
    int L[n1];int R[n2];
    for(int i=0;i<n1;i++){
        L[i]=array[l+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=array[m+1+j];
    }
    int i=0;int j=0;int k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            array[k]=L[i];i++;k++;
        }
        else{
            array[k]=R[j];
            inv+=n1-i;
            j++;
            k++;
                   }
    }
    while(i<n1){
        array[k]=L[i];i++;k++;
    }
    while(j<n2){
        array[k]=R[j];j++;k++;
            }

            return inv;
}
int mergeSort(int array[],int l,int r){
  int inv=0;
    if(l<r){
        int m=l+(r-l)/2;
     inv+= mergeSort(array,l,m);
     inv+= mergeSort(array,m+1,r);
     inv+= merge(array,l,r,m);
    }
    return inv;
}
int partition(int arr[],int start,int end){
    int pivot=arr[end];
    int ind=start;
    for(int i=start;i<end;i++){
        if(arr[i]<pivot){
            swap(arr[i],arr[ind]);
            ind++;
        }
    }
        swap(arr[end],arr[ind]);
    
    return  ind;
}

void quickSort(int array[],int start,int end){
    if(start<end){
      int pivot=  partition(array,start,end);
      quickSort(array,start,pivot-1);
      quickSort(array,pivot+1,end);             
    }

}

int main(){
   int n;
   cin>>n;
   int array[n];
   for(int i=0;i<n;i++){
       cin>>array[i];
   }
cout<<   mergeSort(array,0,n-1);
 
//    for(int i:array){cout<<i<<" ";};

}