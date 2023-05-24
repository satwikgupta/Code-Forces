#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long

using namespace std;

int main()
{
    int count=0;
    string t;
    cin >> t;
    int x=t.length();
    f(x)
    {
        if(t[i]>96){
            count++;

        }
    }
    if(count>(x/2))
    {
        for(auto &c :t){c=tolower(c);}
    }
    else{
        for(auto &c :t){c=toupper(c);}
        // transform(t.begin(), t.end(), t.begin(), ::toupper);
    }
    return 0;
}
