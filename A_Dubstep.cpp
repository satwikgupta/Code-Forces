#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    string t;
    cin >> t;
    int x = t.length(), i = 0,j=0;
    f(x)
    {
        if (t[i] == 'W' && t[i + 1] == 'U' && t[i + 2] == 'B')
        {
            if (j==1)
            {
                
            }
            else
            {
                cout << ' ';
                j=1;
            }
            i += 2;
        }
        else
        {
            cout << t[i];
            j=0;
        }
    }
    return 0;
}
