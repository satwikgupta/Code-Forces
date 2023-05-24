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
        int n, s;
        cin >> n >> s;
        int arr[n];
        f(n){
            cin >> arr[i];
            if(arr[i]<=0){
                s = 0;}
        }
        sort(arr, arr + n);
        int i = 1, j=0;
        while(i<=s || j<n){
            if(i==arr[j]){
                j++;
            }
            else{
                s -= i;
            }
            i++;
        }
        cout << (s == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
