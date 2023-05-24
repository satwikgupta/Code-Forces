#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, count=0;
    cin >> t;
    while(t>0){
        if(t>=100){
            count++;
            t -= 100;
        }
        else if(t>=20)
        {
            count++;
            t -= 20;
        }
        else if(t>=10)
        {
            count++;
            t -= 10;
        }
        else if(t>=5)
        {
            count++;
            t -= 5;
        }
        else if(t>=1)
        {
            count++;
            t -= 1;
        }
    }
    cout << count;
    return 0;
}
