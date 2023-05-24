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
        int x = 0, y = 0, count = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        x = y = count = a;
        // for x
        if (x > c)
        {
            x -= c;
            y += c;
            count += c;
        }
        else
        {
            y += x;
            count += x;
            x = 0;
        }
        // for y
        if (y > b)
        {
            x += b;
            y -= b;
            count += b;
        }
        else
        {
            x += y;
            count += y;
            y = 0;
        }

        if (x != 0 || y != 0)
        {
            int mn = min(x, y);
            if (mn > d)
            {
                count += d;
            }
            else
            {
                count += mn;
            }
        }
        cout << count + 1 << endl;
    }
}
