#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    string s;
    cin >> s;
    int b=0, g=0;
    for (int i = 0; i < t; i++)
    {
        if(s[i]=='B'){
            b++;
        }
        else if(s[i]=='G'){
            g++;
        }
    }
    int mn = min(b, g);
    int mx = max(b, g);
    cout << mn << " " << mx - mn;

    return 0;
}
