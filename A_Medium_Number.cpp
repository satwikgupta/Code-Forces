#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        f(3){
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        cout << arr[1]<<endl;
    }
    return 0;
}
