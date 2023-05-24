#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    int arr[t];
    double f = 0;
    f (t)
    {
        cin >> arr[i];
        f += arr[i];
    }
    cout<<f / t;

    return 0;
}
