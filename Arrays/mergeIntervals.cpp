#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &vec){
    vector<vector<int>> mergeIntervals;
    if(vec.size()==0){
        return mergeIntervals;
    }
    else{
        sort(vec.begin(),vec.end());
        vector<int> tempInterval=vec[0];
        for(auto it:vec){
            if(it[0]<=tempInterval[1]){
                tempInterval[1]=max(it[1],tempInterval[1]);
            }
            else{
                mergeIntervals.push_back(tempInterval);
                tempInterval=it;
            }
        }
        mergeIntervals.push_back(tempInterval);
    }
return mergeIntervals;
}

    int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>> mergedIntervals = { { 1, 3 }, { 2, 6 }, { 8, 10 }, { 15, 18 } };
    for(auto i:mergeIntervals(mergedIntervals))
    {
        for(int ele:i){
            cout<<ele<<" ";
        }
        cout<<"||";
    }
}