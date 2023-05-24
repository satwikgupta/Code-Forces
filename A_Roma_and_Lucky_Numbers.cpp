#include <bits/stdc++.h>
// #define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t, digit, count = 0;
    cin >> t >> digit;
    while (t--)
    {
        ll num;
        map<ll, int> s;

        while (num)
        {
            s[num % 10]++;
            num /= 10;
        }

        if ((s[4] + s[7]) <= digit)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
