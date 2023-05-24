#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b;
        ll sumi = 0;
        cin >> a >> b;
        ll ar1[a], ar2[b];
        f(a)
        {
            cin >> ar1[i];
        }
        f(b)
        {
            cin >> ar2[i];
        }
        sort(ar1, ar1 + a);
        sort(ar2, ar2 + b);
        int mx, mn;
        if (a > b)
        {
            f(b)
            {
                sumi += ar2[i];
            }
            f(a - b)
            {
                sumi += ar1[a - 1 - i];
            }
        }
        else
        {
            f(a)
            {
                sumi += ar2[b - 1 - i];
            }
        }

        cout << sumi << endl;
    }
    return 0;
}
