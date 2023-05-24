#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int x, c = 0, d=0;
        cin >> x;
        int arr[x];
        f(x)
        {
            cin >> arr[i];
        }
        sort(arr, arr + x);

        f(x)
        {
            if (arr[i] < 0)
            {
                c += arr[i];
            }
            else if(arr[i]>=0)
            {
                d += arr[i];
            }
        }
        if (c < 0)
        {
            c = -c;
        }

        cout << abs(d-c) << endl;
    }
    return 0;
}
