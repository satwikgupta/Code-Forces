#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll arr[4];
    f(4)
    {
        cin >> arr[i];
    }

    if (arr[0] == arr[1] && arr[2] == arr[3]) // for points on line y=x
    {
        cout << arr[0] << " " << arr[2] << " " << arr[2] << " " << arr[0];
    }

    else if (arr[0] == arr[3] && arr[1] == arr[2]) // for points on line y=-x
    {
        cout << arr[0] << " " << arr[0] << " " << arr[1] << " " << arr[1];
    }

    else if (arr[0] == arr[2])                  // points with x-coordinate same
    {
        sort(arr, arr + 4);                     // checking for front or back

        if (arr[0] == arr[2])                   // front pairs
        {
            cout << arr[3] << " " << arr[0] << " " << arr[3] << " " << arr[3];
        }
        else if (arr[1] == arr[3])              // back pairs
        {
            cout << arr[0] << " " << arr[0] << " " << arr[0] << " " << arr[3];
        }
    }
    else if (arr[1] == arr[3])                  // points with y-coordinate same
    {
        sort(arr, arr + 4);                     // checking for top or bottom

        if (arr[0] == arr[2])                   //bottom
        {
            cout << arr[0] << " " << arr[3] << " " << arr[3] << " " << arr[3];
        }
        else if (arr[1] == arr[3])              //top
        {
            cout << arr[0] << " " << arr[0] << " " << arr[3] << " " << arr[0];
        }
    }
    else
    {
        cout << -1;
    }

    return 0;
}
