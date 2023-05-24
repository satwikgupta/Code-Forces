#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t; ll arr[t]; ll n[t]; 
    f(t){
        cin>>arr[i];
        n[arr[i]-1]=i+1;
    }
    f(t)
{
    cout<<n[i]<<" ";
}
    return 0;
}
