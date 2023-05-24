#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i = i + 1)
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    // string x, y;
    // getline(cin, x);
    // getline(cin, y);
    // f(x.size()){
    //     if(static_cast<int>(x[i])==t){
    //         a=1;
    //     }
    // }
    // f(y.size()){
    //     if(static_cast<int>(y[i])==t){
    //         a=1;
    //     }

    // }
    int x, y;
    cin >> x;
    set<int> s;
    // int a1[x];
    f(x)
    {
        int a;
        cin >> a;
        s.insert(a);
        // if (a1[i] == t)
        // {
        //     a = 1;
        // }
    }
    cin >> y;
    // int a2[y];
    f(y)
    {
        
        int a;
        cin >> a;
        s.insert(a);
        // if (a2[i] == t)
        // {
        //     a = 1;
        // }
    }


    if (s.size() == t)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}
