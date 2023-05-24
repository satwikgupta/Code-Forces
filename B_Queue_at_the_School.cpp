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
       int n,t;
       cin>>n>>t; 
       string s;
       cin>>s;
       for (int i = n; i > 0; i--)
       {
        swap(s[i],s[i-1]);
       }
       
    }
    return 0;
}
