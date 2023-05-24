#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int recc(int x, int y, char ch)
{
    if (x > (100) || x < (-100) || y < (-100) || y > (100))
    {
        return 1e6;
    }

    if (x == 0 && y == 0)
    {
        return 1;
    }
    // map<char, int> m;
    int left =1e6, right=1e6, up=1e6, down=1e6, skip=1e6;

    if (ch != 'l')
    {
        left = 1 + recc(x - 1, y, 'l');
    }
    if (ch != 'r')
    {
        right = 1 + recc(x + 1, y, 'r');
    }
    if (ch != 'u')
    {
        up = 1 + recc(x, y + 1, 'u');
    }
    if (ch != 'd')
    {
        down = 1 + recc(x, y - 1, 'd');
    }

    skip = 1 + recc(x, y, 's');

    return min(left, min(right, min(up, min(down, skip))));
}

int main()
{
    ll t;
    int x, y;
    cin >> x >> y;
    int i=recc(1, 0, 's');
    cout << i;
    cout << 45;
    // cin >> t;
    // while (t--)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     cout<< recc(x, y, 's');
    // }
    return i;
}
