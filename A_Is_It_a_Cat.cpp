
#include <bits/stdc++.h>
#define ll long long int
    using namespace std;
#define loopf for (int i = 0; i < n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int m = 0, e = 0, o = 0, w = 0;
        int ind = 0;
        if (s[ind] == 'm')
            while (s[ind] == 'm' && ind < n)
            {
                m = 1;
                ind++;
            }
        else
        {
            cout << "NO" << endl;
            break;
        }
        if (s[ind] == 'e')
            while (s[ind] == 'e' && ind < n)
            {
                e = 1;
                ind++;
            }
        else
        {
            cout << "NO" << endl;
            break;
        }
        if (s[ind] == 'o')
            while (s[ind] == 'o' && ind < n)
            {
                o = 1;
                ind++;
            }
        else
        {
            cout << "NO" << endl;
            break;
        }
        if (s[ind] == 'w')
            while (s[ind] == 'w' && ind < n)
            {
                w = 1;
                ind++;
            }
        else
        {
            cout << "NO" << endl;
            break;
        }

        if (m == 1 and e == 1 and o == 1 and e == 1 and ind == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}