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
        string a,b;
        int x=0,y=0;
        cin>>a>>b;
        f(a.length()){
            if(a[i]=='X'){
                x+=10;
            }
            else if(a[i]=='S'){
                x*=-1;
            }
            else if(a[i]=='L'){
                x+=9;
            }
            else if(a[i]=='M'){
                x+=5;
            }
        }
        f(b.length()){
            if(b[i]=='X'){
                y+=10;
            }
            else if(b[i]=='S'){
                y*=-1;
            }
            else if(b[i]=='L'){
                y+=9;
            }
            else if(b[i]=='M'){
                y+=5;
            }
        }
        if(x>y){
            cout<<">"<<endl;
        }
        else if(x<y){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
        // cout<<a<<b;
    }
    return 0;
}
