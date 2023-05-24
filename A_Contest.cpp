#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int formula(int x, int y){
    return max(3 * x / 10, x - x * y / 250);
}

int main()
{
    ll a, b, c, d;

    cin >> a >> b >> c >> d;

    if(formula(a, c)>formula(b, d)){
        cout << "Misha";
    }
    else if (formula(a, c) < formula(b, d)){
        cout << "Vasya";
    }
    else{
        cout << "Tie";
    }

        return 0;
}
