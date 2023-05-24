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
        int n, sum=0, check, count=0,c=0, tempsum=0;
        cin>>n;
        int arr[n];
        f(n){
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=2; i<n; i++){
            check=sum/i;
            f(n){
                tempsum+=arr[i];
                c++;
                if(check==tempsum){
                    tempsum=0;
                    c=0;
                    count=max(count,c);
                    if(i==n-1){
                        break;
                    }
                }
                if(check<tempsum){
                    break;
                }

            }
        }
        cout<<count<<endl;
    }
    return 0;
}
