#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t, a[3];
    cin >> t >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int count = 0, i = 0;
    while (t || i < 3)
    {
        if (t % a[i] == 0)
        {
            count += t / a[i];
        }
        else
        {
            t -= a[i];
            count++;
            if (t < a[i + 1])
            {
                t += a[i];
                count--;
                i++;
            }
        }
    }
    cout << count;
    return 0;
}
