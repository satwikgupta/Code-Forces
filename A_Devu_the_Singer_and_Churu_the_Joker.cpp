#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t, n;
    cin >> t >> n;
    int sum = 0, arr[t], i=0;
    for (i; i < t;i++)
    {
        cin >> arr[i];
        sum += arr[i];
        
    }
    int result = n - sum - (t-1)*10;
    if(result >= 0)
    {
        int out = 2*(t - 1) + result / 5;
        cout << out;
    }
    else
    {
        cout << -1;
    }

    return 0;
}