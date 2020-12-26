#include <bits/stdc++.h>
using namespace std;


int sumOfN(int n){
    if(n==0)
        return 0;
    int prev=sumOfN(n-1);
    return n+prev;
}

int powerOfNum(int n,int p){
    if(p==0){
        return 1;
    }
   
    else{
        int mult=powerOfNum(n,p-1);
       return  mult*n;
    }
}

int factorialOfNum(int n){
    if(n==0){
        return 1;
    }

    return factorialOfNum(n-1)*n;
}
int  fibanocci(int n){
    if(n==0 || n==1)
        return 1;
    
    else
        return fibanocci(n-1)+fibanocci(n-2);
    
}

void fibanocciSeq(int a,int b,int limit){
   
    int outi=a+b;
    if (outi > limit)
    {
        return;
    }
    cout<<outi<<" ";
    fibanocciSeq(b,outi,limit);
}
void finalFiba(int n){
    cout<<1<<" "<<1<<" ";
    fibanocciSeq(1,1,n);
}


bool ifArraySorted(int array[],int n ){
if(n==1)
    return true;
else{
    bool sorted=ifArraySorted(array+1,n-1);
    return (array[0]<array[1]  && sorted) ;
}
}


void inc(int n){
    if(n==0)
        return; 
    inc(n-1);
    cout<<n<<" ";
}

void dec(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    dec(n - 1);
}
int arraySearch(int array[],int val,int n,int i){  //first occurance 
    if(i==n)
    return -1;
    else if(array[i]==val)
        return i;
    
    else
        return arraySearch(array,val,n,i+1); 
          
        }

int arraySearch2(int array[], int val, int n, int i) //last occurance
 {
     if(i==n) return -1;
     int res=arraySearch2(array,val,n,i+1);
     if(res!=-1)
         return res;

     else if(array[i]==val)
         return i;

     return -1;
 }
    
        
void seriesPrint(int n){
        if(n<0){
            return ;
        }
        cout<<n <<" ";
        seriesPrint(n-5);
    }

    void upSeriesPrint(int a,int n){
        if(a>=n )
            return ;
        cout<<a<<" ";
        upSeriesPrint(a+5,n);   
    }     

int main(){
    seriesPrint(16);
    upSeriesPrint(0,16);
  
}