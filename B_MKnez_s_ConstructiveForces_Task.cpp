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
        int a;
        cin >> a;
        if(a%2!=0){
            cout << "NO";
        }
        else{
            cout << "YES"<<endl;
            for (int i = 0; i < a; i++){
                if(i%2==0)
                    cout << 1 << " ";
                else
                    cout << -1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
