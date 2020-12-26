#include <bits/stdc++.h>
#define M 32
#define F(i, L, R) for (int i = L; i < R; i++)
using namespace std;

long binaryStrinig(string str){
    int n=stoi(str,0,2);
    int noofOnes=0;
    while(n!=0){
        noofOnes++;
        n=n&n-1;
    }

    return noofOnes* (noofOnes-1)/2;
}

int main(){

string str="1111";
int num=binaryStrinig(str);
cout<<num;

}