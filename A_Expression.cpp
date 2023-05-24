#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    
    int a,b,c;
    cin >> a>>b>>c;
    cout<<max(max(max(a+b*c,a*(b+c)),max(a*b*c, (a+b)*c)), max(a+b+c, a*b+c));
    return 0;
}
