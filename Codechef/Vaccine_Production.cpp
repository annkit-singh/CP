#include <bits/stdc++.h>
using namespace std;
int main(){
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int days=0;
    if(d1==d2){
        days=d1-1;
        int oW=v1+v2;
        if((p%oW)==0)
         days+= (p/oW);
        else
         days+=(p/oW)+1;
        cout<<days;
    }
    else if(d1>d2){
        int tempSum=0;bool flag=false;
        for(int i=d2;i<d1;i++)
        {

            tempSum+=v2;
            if(tempSum>=p)
            {
                flag=true;
                days=i;
                break;
            }
        }
        if(!flag)
        {
            days=d1-1;
            int oW = v1 + v2;
            int remSum=p-tempSum;
            if ((remSum % oW) == 0)
                days += (remSum / oW);
            else
                days += (remSum / oW) + 1;
        }
        cout<<days;
    }
    else  {
        int tempSum = 0;
        bool flag = false;
        for (int i = d1; i < d2; i++)
        {
            tempSum += v1;
            if (tempSum >= p)
            {
                flag = true;
                days = i;
                break;
            }
        }
        if (!flag)
        {
            days = d2 - 1;
            int oW = v1 + v2;
            int remSum = p - tempSum;
            if ((remSum % oW) == 0)
                days += (remSum / oW);
            else
                days += (remSum / oW) + 1;
        }
        cout << days;
    }


}