#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t, n;
    cin >> t >> n;
    set<int> res;
    // vector<vector<int>> v(t);
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        
        for (int j = 0; j < a; j++)
        {
            int b;
            cin >> b;
            
            if(b<n){
                res.insert(i+1);
            }
        }
    }
    
    cout << res.size() << endl;

    for (auto it: res){
        cout << it << " ";
    }
        return 0;
}
