#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    string s[t];
    bool x = false;

    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
        if (s[i] == "DCC")
        {
            x = true;
        }
    }
    if (x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
