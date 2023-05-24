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
        int a, m=0, ind;
        cin >> a;
        int arr[a];
        f(a){
            cin >> arr[i];
            // if(arr[i]>arr[i-1]){
            //     flag = 1;
            //     ind = i;
            // }
            ind = max(m, arr[i]);
        }

        // if(flag==1 && ind<a-1){
        //     cout << "NO" << endl;
        // }
        // else{
        //     cout << "YES" << endl;
        // }
        if(m==0 || m==a-1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;

        }
    }

    return 0;
}
