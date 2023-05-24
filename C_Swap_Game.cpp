#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int x, i = 0, count = 0;
        cin >> x;
        int arr[x];
        f(x)
        {
            cin >> arr[i];
        }
        while (arr[0] == 0)
        {
            count++;
            if (arr[i] == 0)
            {
                i++;
            }
            arr[0]--;
            swap(arr[0], arr[i]);
        }
        if (count % 2 != 0)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "ALICE" << endl;
        }
    }
    return 0;
}
