#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    float mid = (float)(a + b) / 2;
    int s = 0, e = 0, l = 0;

    for (int i = 1; i <= 6; i++)
    {
        if (i < mid)
        {
            s++;
        }
        else if (i > mid)
        {
            l++;
        }
        else
        {
            e++;
        }
    }
    if(a == b)
        cout << 0 << ' ' << 6 << ' ' << 0;
    else if (a < b)
        cout << s << " " << e << " " << l;
    else
        cout << l << " " << e << " " << s;

    return 0;
}
