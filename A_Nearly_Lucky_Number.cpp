#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    map<int, int> s;

    while (t)
    {
        s[t % 10]++;
        t /= 10;
    }
    int n = s[4] + s[7];
    if (n == 4 || n == 7)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
    return 0;
}
