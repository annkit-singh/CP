#include <bits/stdc++.h>
using namespace std;

void reverseAString(string str){
      if(str.length()==0){
         return ;
      }
   string ros=str.substr(1);
 
   reverseAString(ros);
   cout << str[0];
   }

void piFunction(string str){
   if(str.length()==0)
      return ;
   if(str[0] =='p' && str[1]=='i'){
   cout<<"3.14";
   piFunction(str.substr(2));
   }
   else{
      cout<<str[0];
      piFunction(str.substr(1));
   }
}

void towerOfHanoi(int n,char src,char dest,int helper ){
   if(n==0) return;
   towerOfHanoi(n-1,src,helper,dest);
   cout<<src<<" to "<<dest<<"\n";
   towerOfHanoi(n - 1, helper, dest, src);
}

string removeDuplicates(string str){
   if(str.length()==0) return "";

   char c=str[0];
   string ans=removeDuplicates(str.substr(1));
   if(c==ans[0]){
      return ans;
   }
   return c+ans;
}
int main(){
  cout<< removeDuplicates("aabfffbb");

}