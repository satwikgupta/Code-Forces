#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    int t, sumx=0, sumy=0, sumz=0;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        sumx+=a; sumy+=b; sumz+=c;
    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
