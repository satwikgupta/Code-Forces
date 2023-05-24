#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    int t, n, m = INT_MAX;
    cin >> t >> n;
    int arr[n];
    f(n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = t-1; i < n; i++)
    {
        m = min(m, arr[i]-arr[i-t+1]);
    }
    cout << m;
    return 0;
}
                  