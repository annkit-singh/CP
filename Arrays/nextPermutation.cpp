#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

string swap(string &str,int a,int b ){
        char temp=str[a];
        str[a]=str[b];
        str[b]=temp;
    return str;
}

void printPermute(string str,int l,int r){
    if(l==r){
       cout<< str<< " ";
       return;
    }
    for(int i=l;i<str.size();i++){
       str= swap(str,l,i);
        printPermute(str,l+1,r);
       str= swap(str,l,i);
    }
}

string reverseNum(string &str){
    int l=0;
    int r=str.size()-1;
    while(l<r){
        char temp=str[l];
        str[l++]=str[r];
        str[r--]=temp;
    }
    return str;
}

void nextPermutation(vector<int> &vec){
    int k,l,n=vec.size();
    for( k=n-2;k>=0;k--){
        if(vec[k]<vec[k+1]){
            break;
        }
    }
        if(k<0){
            reverse(vec.begin(),vec.end());
        }
        else{
            for(l=n-1;l>k;l--){
                if(vec[l]>vec[k]){
                    break;
                }

            }
        }
            swap(vec[k],vec[l]);
            reverse(vec.begin()+k+1,vec.end());
        
        
    
 for(int i:vec){
 cout<<i<<" ";
 }

}


int main(){
  vector<int> vec{1} ;
 vec.shrink_to_fit();
cout<<vec.size();

//   for(int i=0;i<5;i++){
//       cin>>vec[i];
//   }
//   nextPermutation(vec);


  
}