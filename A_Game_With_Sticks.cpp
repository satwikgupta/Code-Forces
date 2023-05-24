#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    int s, t;
    int i = 0;
    cin >> s >> t;
    for (; i < 100; i++){
        --s;--t;
        if (s == 0 || t == 0){
            break;
        }

    }
    // cout << i;
    if (i % 2 == 0)
    {
        cout << "Akshat";
    }
    else
    {
        cout << "Malvika";
    }

    return 0;
}
