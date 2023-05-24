#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    int f = t / 5;
    // cout << f << endl;
    if(t == f*5){
        cout << f;
    }
    else{
        cout << f + 1;
    }

    return 0;
}
