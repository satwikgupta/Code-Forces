#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

set<int> a;
int sum_subsequence(int index, vector<int> &arr, int sum, vector<int> v)
{
    if (index == arr.size())
    {
        
        a.insert(sum);
        return 0;
    }
    else
    {
        v.push_back(arr[index]);
        sum += arr[index];
        sum_subsequence(index + 1, arr, sum, v);
        v.pop_back();
        sum -= arr[index];
        sum_subsequence(index + 1, arr, sum, v);
    }
}
int main()
{
    ll t;
    cin >> t;
    vector<int> v;
    vector<int> arr;
    while (t--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sum_subsequence(0, v, 0, arr);

    sort(a.begin(), a.end());
    cout << *a.begin();

    return 0;
}
