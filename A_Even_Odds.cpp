#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    // int arr[a];
    if(a%2!=0){
        ll c=(a/2)+1;
        if(b<=c){
            cout<<(2*b)-1;
        }
        else{
            cout<<2*(b-c);
        }
    }
    else{
        if(b<=a/2){
            cout<<(2*b)-1;
        }
        else{
            cout<<2*(b-a/2);
        }
    }
}
