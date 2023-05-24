#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll n, m, a, b, c, d;
    cin >> n >> m >> a >> b;
    c = (n / m) * b;
    c += min((n % m) * a, b);
    d=n*a;
    cout << min(c, d);

    return 0;
}
