#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n = 4000005;
    bool array[n + 1];
    memset(array, true, n + 1);
    for (long long int i = 2; i * i < n; i++)
    {
        for (long long int j = i * i; j <= n; j+=i)
        {
            array[j] = false;
        }
    }

    long long int t;

    cin >> t;
    while (t-- != 0)
    {
        long long int var5 = 2;
        long long int size; //v6 ==size
        cin >> size;
        long long int B[size];
        for (long long int i = 0; i < size; i++)
            cin >> B[i];

        unordered_map<long long int, long long int> Om;
        for (long long int i = 0; i < size; i++)
        {
            if (Om.find(B[i]) == Om.end())
            {
                while ((array[var5]) == 0)
                    var5++;

                Om[B[i]] = var5;
                var5++;
            }
        }
        for (long long int i = 0; i < size; i++)
            cout << Om[B[i]] << " ";
    }
}