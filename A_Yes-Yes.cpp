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
        string s;
        cin>>s;
        int x, flag=1;
        switch (s[0])
        {
        case 'Y':
            x = 1;
            break;

        case 'e':
            x = 2;
            break;
        case 's':
            x = 3;
            break;

        default:
            break;
        }
        for (int i = 0; i < s.length(); i++){
            if(s[i]=='Y' && x==1)
            {
                x = 2;
            }
            else if (s[i] == 'e' && x == 2)
            {
                x = 3;
            }
            else if (s[i] == 's' && x == 3)
            {
                x = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
        cout << (flag == 0 ? "NO" : "YES") <<endl;
    }
    return 0;
}
