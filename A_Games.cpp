#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t, count = 0;
    vector<pair<int, int>> v;
    cin >> t;
    f(t)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    f(t)
    {
        for (int j = 0; j < t; j++)
        {
            if (v[i].first == v[j].second)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
