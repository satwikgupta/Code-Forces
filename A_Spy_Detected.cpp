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
        int n;
        cin >> n;
        int arr[n];
        int a = 0;
        f(n)
        {
            cin >> arr[i];
            if (arr[i] != arr[i - 1] && i != 0)
            {
                a = i;
                // break;
            }
        }
        if (a != n-1)
        {
            cout << a << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}
