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
        int x, m=0, s=0;
        cin >> x;
        int arr[x];
        f(x){
            cin >> arr[i];
            if(arr[i]>m){
                s = m;
                m = arr[i];
            }
            else if(arr[i]>s){
                s = arr[i];
            }
        }
        f(x){
            if(arr[i]==m){
                cout << m - s<<" ";

            }
            else{
                cout << arr[i] - m << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
