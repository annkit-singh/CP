#include<iostream>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--!=0){
    unsigned int n,d;
    cin>>n>>d;
   unsigned  int array[n];
    unsigned int risk=0,normal=0;
    for(unsigned int i=0;i<n;i++){
        cin>>array[i];
        if(array[i]>=80 || array[i]<=9){
            risk+=1;
        }
        else
            normal+=1;
    }

int result=0;
    if(risk%d==0)
        result+=risk/d;
    else
        result+=(risk/d)+1;
    

    if(normal%d==0)
        result+=normal/d;
    else
        result+=normal/d+1;

        cout<<result<<"\n";    

    }
}