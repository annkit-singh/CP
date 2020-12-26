#include <bits/stdc++.h>
using namespace std;

struct Pair{
  int min;
  int max;
};

struct Pair minMax(int array[],int low,int high){
  struct Pair m,one,two;
  int mid;
  if(low==high){
    m.max=array[low];
    m.min=array[low];
    return m;
  }
  if(high==low+1){
    if( array[high]>array[low] ){
      m.max=array[high];
      m.min=array[low];
    
          }
    else{
      m.max=array[low];
      m.min=array[high];
    }
    return m;
  }
   mid=(low+high)/2;
  one=minMax(array,low,mid);
  two=minMax(array,mid+1,high);
  if(one.min<two.min){
    m.min=one.min;

  }
  else{
    m.min=two.min;
  }
  if(one.max>two.max){
    m.max=one.max;
  }
  else{
    m.max=two.max;
  }
  return m;
}




int main(){
  int array[]{ 1000, 11, 445, 
                  1, 330, 3000,8888 };
        int n=sizeof(array)/sizeof(int);
        struct Pair m=  minMax(array,0,n);
        cout<<"Maximum value "<<m.max<<endl;
        cout<<"Minimum value is "<<m.min;
        


}