#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, c=0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if(s[1] == '+'){
            c++;
        }
        else if (s[1] == '-'){
            c--;
        }
    }
    cout << c;
    return 0;
}
