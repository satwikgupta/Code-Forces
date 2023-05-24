#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    if(t%4==0 || t%7==0 || t%47==0 || t%74==0 || t%474==0 || t%477==0 || t%747==0 || t%747==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
