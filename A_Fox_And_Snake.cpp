#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll m, n;
    cin >> m >> n;
    int k = n;
    // cout << m << n;
    for (ll i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            while(--k)
            {
                cout << '#';
            }
            cout << endl;
        }
        else
        {
            if (i % 4 == 3)
            {
                cout << "#";
            }
            for (int j = 0; j < n - 1; j++)
            {
                cout << ".";
            }
            if (i % 4 == 1)
            {
                cout << "#";
            }

            cout << endl;
        }
    }
    return 0;
}