#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, target, sum = 0;
    cin >> t >> target;
    // int arr[t];
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    int S = sum, count = 1;

    while (target > S)
    {
        S += sum + t;
        sum += t;
        count++;
    }
    cout << count;
    return 0;
}
