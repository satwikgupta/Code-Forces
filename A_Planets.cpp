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
        int n, c, a, count=0, pus=0;
        cin>>n>>c;
        int arr[n];
        f(n){
            cin>>arr[i];
        }
        sort(arr, arr + n);
        a=arr[0];
        f(n+1){
            if(arr[i]==a){
                count++;
                // cout<<count<<"s"<<endl;
            }
            else if(arr[i]!=0){
                a=arr[i];
                if(count<=c){
                    pus+=1*count;
                }
                else{
                    pus+=c;
                }
                count=1;
            }

        }
        cout<<pus<<endl;
    }
    return 0;
}
