#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll x, n, l=-1;
    cin >> x >> n;
    while (1)
    {
        if(x<n){
            break;
        }
       if(2*l >= x){
           break;
       }
       if(l==-1){
           l = 0;
       }
       l += n;
    }
    cout << l;
    return 0;
}
