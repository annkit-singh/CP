#include <bits/stdc++.h>
using namespace std;

void  generateSubstring(string orig,string emp){
    if(orig.length()==0){
            cout<<emp<<" ";
            return;
        }
   char ch=orig[0];
   string orig2=orig.substr(1);

   generateSubstring(orig2,emp );
   generateSubstring(orig2,emp+ch);
}

int main(){
   generateSubstring("AB","");


}