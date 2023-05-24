#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n>> k>> l>> c>> d>> p>> nl>> np;
    int num = min(k * l / nl, min(c * d, p / np));
    num /= n;
    cout << num;
    return 0;
}
