#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int digit(int *x)
{
    int tempt;
    *x = -(*x);
    tempt = *x % 10;
    *x = *x / 100;
    *x = *x * 10 + tempt;
    *x = -(*x);
}
int main()
{
    int t, c, d;
    cin >> t;
    if (t >= 0)
    {
        cout << t;
    }
    else
    {
        c = t / 10;
        digit(&t);
        cout << max(c, t);
    }
    return 0;
}
