#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    string s;
    cin>>s;
    int t=s.length();
    f(t)
    {
        if(s[i]=='-' && s[i+1]=='-'){
            cout<<2;
            i++;
        }
        
        else if(s[i]=='-' && s[i+1]=='.'){
            cout<<1;
            i++;
        }
        else if(s[i]=='.'){
            cout<<0;
            
        }

    }
    return 0;
}
