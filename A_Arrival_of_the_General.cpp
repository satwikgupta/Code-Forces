#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t, max = 0, min = 1000, j1, j2;
    cin >> t;
    ll a[t], count = 0, count2 = 0;
    f(t)
    {
        cin >> a[i];
        if (min >= a[i])
        {
            min = a[i];
            j1 = i;
        }
        if (max < a[i])
        {
            max = a[i];
            j2 = i;
        }
    }
    count += t - 1 - j1;

    if (j1 < j2)
    {
        count += j2 - 1;
    }
    else
    {
        count += j2;
    }

    /*f(t){
        if(a[i]==min){
            if(a[i+1]==min){
                count1=0;
            }
            else{
                a[i]=a[i+1];
                count1++;
            }
        }
    }
    for(int i=t-1; i<=1; i--){
        if(a[i]==max){
            if(a[i-1]==max){
                count2=0;
            }
            else{
                a[i-1]=a[i];
                count2++;
            }
        }
    }*/
    cout << count;

    return 0;
}
