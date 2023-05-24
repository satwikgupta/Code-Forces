#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    int arr[t];
    int m[] = {0, 0, 0, 0};


        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
            if ((i + 1) % 3 == 1)
            {
                m[1] += arr[i];
            }
            else if ((i + 1) % 3 == 2)
            {
                m[2]+=arr[i];
            }
            else if ((i + 1) % 3 == 0)
            {
                m[3] += arr[i];
            }
        }
    // for (int i = 0; i < 4; i++){
    //     cout << m[i] <<' ';
    // }
    if (m[1] > m[2])
    {
        if (m[1] > m[3])
        {
            cout << "chest";
        }
        else
        {
            cout << "back";
        }
    }
    else
    {
        if (m[2] > m[3])
        {
            cout << "biceps";
        }
        else 
        {
            cout << "back";
        }
    }
    return 0;
}
