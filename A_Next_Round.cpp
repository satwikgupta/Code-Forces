#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num = arr[t - 1], count;
    if(arr[t-2]>num)
         count = t;
    for (int i = t; i < n;i++){
        if(arr[i]>=num)
            count++;
    }
    cout << count;
    return 0;
}
