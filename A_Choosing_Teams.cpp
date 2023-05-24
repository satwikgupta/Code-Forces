#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t, n;
    int count = 0;
    cin >> t >> n;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + t);

    for (int i = 0; i < (t / 3) * 3; i += 3)
    {
        if (arr[i + 2] + n <= 5)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
