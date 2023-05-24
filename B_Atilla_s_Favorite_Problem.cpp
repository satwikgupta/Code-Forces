#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a, m=0;
        string s;
        cin >> a >> s;
        f(a){
            int x = s[i];
            m = max(x, m);

        }
        cout << m - 96 << endl;
    }
    return 0;
}
