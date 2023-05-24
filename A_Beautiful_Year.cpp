#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (1)
    {
        t++;

        int x = t;
        set<int> s;
        
        while (x != 0)
        {
            s.insert(x % 10);
            x /= 10;
        }


        if(s.size()==4){
            break;
        }
    }
    cout << t;
    return 0;
}
