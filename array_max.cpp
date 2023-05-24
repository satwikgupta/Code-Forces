#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t, temp = 0;
    cin >> t;
    int arr[t];
    f(t)
    {
        cin >> arr[i];
    }

    f(t)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
        }
    }
    cout << temp;

    return 0;
}
