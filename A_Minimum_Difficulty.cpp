#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    int arr[t], c = INT_MAX;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < t - 1; i++)
    {
        int mini = 0;
        for (int j = 1; j < t; j++)
        {
            if (j == i)
                continue;
            else if(j == i+1)
                mini = max(mini, arr[j] - arr[j - 2]);
            else
                mini = max(mini, arr[j] - arr[j - 1]);
        }
        c = min(c, mini);
    }
    cout << c;

    return 0;
}
