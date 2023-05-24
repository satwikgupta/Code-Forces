#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, count=0;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c >=2)
            count++;
    }
    cout << count;
    return 0;
}
