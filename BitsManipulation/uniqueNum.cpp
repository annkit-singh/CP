#include <bits/stdc++.h>
using namespace std;


bool getBit(int n,int bitNo){  //to get the bit if set or not
    int shift=1<<bitNo;
    int result=shift&n;
    if(result!=0)
        return true;
    else 
    return false;
}

void solve(string str){  //used to find the number which appear once in a array only
    int n=str.size();
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(getBit(i,j)!=0)
                cout<<str[j];        
        cout<<endl;
        }
    }
}

int getBit1(int a,int bitNo){  //used to get bit i.e set or unset
    return ( (a & (1<<bitNo))!=0 );
}
int setBit(int n,int bitNo){  //used to set a bit
    return (n|(1<<bitNo) );
}


void unique2(int array[],int n){  //used to find the unique number which appears once among triplets of a number
    int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(array[j],i)){
                sum++;
                }
            }
            if(sum%3!=0)
                result=setBit(result,i);
            
        }
        cout<<result;
    }


void unique(int arr[], int n) //used to find the two unique numbers which appears in an array
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}

int main(){
    
    // int  n;cin>>n;

    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
 
    unique2(arr,10);

   
}