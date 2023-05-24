#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, o, count = 0;
        string s;
        cin >> n >> o >> s;
        map<char, int> m;
        for (char ch : s)
        {
            m[ch]++;
        }
        for (auto it : m)
        {
            if (it.first > 96)
            {
                int mi = min(it.second, m[it.first - 32]);
                count += mi;
                m[it.first] -= mi;
                m[it.first - 32] -= mi;
            }
        }

        for (auto it : m)
        {
            if (o > 0 && it.second >= 2)
            {
                it.second /= 2;
                int mi = min(it.second , o);
                if (o >= mi)
                {
                    count += mi;
                    o -= mi;
                    // cout << 1;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
