#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, time, maxa=INT_MIN;
    cin >> t >> time;
    while (t--)
    {
        int f, tim;
        cin >> f >> tim;
        if(time>=tim){
            maxa = max(maxa, f);
        }
        else{
            maxa = max(maxa, f - (tim - time));
        }
    }
    cout << maxa;
    return 0;
}
