#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int sqr(int x)
{
    return x * x;
}

int main()
{
    ll t;
    cin >> t;
    int x=t;
    while (t--)
    {
        float rs, rh;
        int c1 = 0, c2 = 0;
        cin >> rs >> rh;
        int n1, n2;
        cin >> n1;
        int ar1[2][n1];
        f(n1)
        {
            cin >> ar1[0][i] >> ar1[1][i];
            float c = sqrt(sqr(ar1[0][i]) + sqr(ar1[1][i]));
            if (c <= (rs + rh))
            {
                c1++;
            }
        }
        cin >> n2;
        int ar2[2][n2];
        f(n2)
        {
            cin >> ar2[0][i] >> ar2[1][i];
            float c = sqrt(sqr(ar2[0][i]) + sqr(ar2[1][i]));
            if (c <= (rs + rh))
            {
                c2++;
            }
        }
        if(c1>c2){
            cout <<"Case #"<<x-t<<": "<< c1-c2 <<" "<< 0 << endl;
        }
        else if(c1<c2){

            cout <<"Case #"<<x-t<<": "<< 0 <<" "<< c2-c1 << endl;
        }
        else{

            cout <<"Case #"<<x-t<<": "<< 0 <<" "<< 0 << endl;
        }

    }
    return 0;
}
