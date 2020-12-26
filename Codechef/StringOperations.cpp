#include <bits/stdc++.h>
#define F(i, L, R) for (int i = L; i < R; i++)
using namespace std;


int main(){
int t;cin>>t;
while(t--!=0){
    string s;
    cin>>s;
    int n=s.size(),i,j;
    set<tuple<int,int,int>> binarySet;
    F(i, 0,n) {
        int cnt=0, even=0, odd=0;
        F(j,i,n) {
            if(s[j]=='1')
            cnt++;
            else{
                if(cnt%2)
                odd++;
                else
                even++;
            }
            int len=j-i+1;
            binarySet.insert({len,even,odd});
    }
}
cout<<binarySet.size()<<"\n";
}
return 0;


}
