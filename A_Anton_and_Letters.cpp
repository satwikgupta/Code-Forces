#include <bits/stdc++.h>
#define f(n) for (int i = 1; i <= n; i = i + 3)
#define ll long long
using namespace std;

int main()
{
    string t;

    set<char> s;

    
    getline(cin, t);
        
        // cout<<" "<<t;
        f(t.size()){
            if(t[i]=='}'){
                break;
            }
            else{
        s.insert(t[i]);
        }}
    // s.insert('w');
    // s.insert('t');
    // s.insert('h');
    // s.insert('f');

    cout << s.size();
    // for (auto it = s.begin(); it !=
    //                           s.end();
    //      ++it)
    //     cout << ' ' << *it;

    return 0;
}
