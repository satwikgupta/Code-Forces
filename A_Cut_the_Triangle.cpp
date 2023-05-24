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
        int x[3], y[3], c = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> x[i] >> y[i];
        }
        for (int i = 0; i < 2; i++)
        {
            if (x[i] == x[i + 1])
            {
                c++;
            }

            if (y[i] == y[i + 1])
            {
                c++;
            }
        }
        if (c <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}
