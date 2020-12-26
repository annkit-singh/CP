#include<iostream>
using namespace std;



    void shellSortOwn(int array[],int n){
    for(int i=n/2;i>0;i/=2){
        for(int j=i;j<n;j++){
            int temp=array[j];
            int k=j;
            while(k>=i && array[k-i]>=temp  ){
                array[k]=array[k-i];
                k-=i;
            }
            array[k]=temp;
        }
        }
    }
void insertionSort(int array[],int n){
    for(int i=1;i<n;i++){
        int temp=array[i];
        int j=i-1;
        while(j>=0 && array[j]>=temp ){
         array[j+1]=array[j];
         j--;   
        }
        array[j+1]=temp;
    }
}

int makeGap(int n ){
    if(n==1){
        return 0;
    }
    else{
    return (n/2 +n%2);
    }
}
void printArray(int array[], int n)
{  for (int i = 0; i < n; i++){
        cout << *(array + i) << "  "; }
}
void mergeTwoSortedArrays(int array1[],int array2[],int n,int m ){
    int gap=makeGap(n+m);
    while(gap>0){
        int i,j,k;
        for(i=0;i+gap<n;i++){
            if(array1[i]>array1[i+gap]){
            swap(array1[i],array1[i+gap] );
            }
        }
        for(j=gap>n?gap-n:0; j<m && i<n; j++,i++){
            if(array1[i]>array2[j]){
            swap(array1[i],array2[j]);
            }
        }
        if(j<m){
            for(k=0;k+gap<m;k++){
                if(array2[k]>array2[k+gap]){
            swap(array2[k],array2[k+gap] );
                }
            }
        }
        gap=makeGap(gap);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int array1[] ={4,6,9,67,23,8};
  int n=sizeof(array1)/sizeof(int);
  int array2[] ={2,44,1,77,97};
  int m = sizeof(array2) / sizeof(int);
  mergeTwoSortedArrays(array1,array2,n,m);
  for(int ele:array1){
      cout<<ele<<" ";

  }
  cout<<endl;
  for(int ple:array2){
      cout<<ple<<" ";

  }
}