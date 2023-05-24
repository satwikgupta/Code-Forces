#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    int x, loc=0;
    f(5){
        for(int j=0; j<5; j++){
            cin>>x;
            if(x==1){
                loc= abs(2-i) + abs(2-j);
                break;
            }
        }
    }
    cout<<loc;
    
    return 0;
}