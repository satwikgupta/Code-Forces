#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll n, s;
    cin >> n >> s;
    map <int, int> m;
    while (s)
    {
        int x, y;
        cin >> x >> y;
        m.insert(x, y);
    }

    auto it = m.begin();
    for (it; it != m.end(); it++){
        if((*it).first < n){
            n = n + (*it).second;
        }
        else{
            cout << "NO";
            return 0;
        }
    }


        cout << "YES";
        return 0;
}
