#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sum_subsequence(int index, vector<int> &arr, int sum, vector<int> v)
{
    if (index == arr.size())
    {
        if (sum % 2 != 0)
        {
            if (v.size() == 3)
            {
                cout << "YES"<<endl;
                for (auto it : v)
                    cout << it+1 << " ";
                cout << endl;
                return true;
            }
        }
        return false;
    }

    v.push_back(index);
    sum += arr[index];
    if(sum_subsequence(index + 1, arr, sum, v)==true){
        return true;
    }
    // sum_subsequence(index + 1, arr, sum, v);
    v.pop_back();
    sum -= arr[index];
    if (sum_subsequence(index + 1, arr, sum, v) == true)
    {
        return true;
    }
    return false;
    // sum_subsequence(index + 1, arr, sum, v);
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        vector<int> arr(x);
        vector<int> v;
        for (int i = 0; i < x; i++)
            cin >> arr[i];

        if(sum_subsequence(0, arr, 0, v)==false) cout<<"NO"<<endl;
    }
    return 0;
}
