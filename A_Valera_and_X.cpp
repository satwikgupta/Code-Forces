#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    int l = t - 1;
    string s[t];

    for (int i = 0; i < t; i++)
        cin >> s[i];
    map<char, int> st;

    if(s[0][0]!=s[t/2][t/2]){
        cout << "NO";
        return 0;
    }
    
    for (int i = 0; i < t; i++)
    {
        if(s[i][i]!=s[0][0]){
            cout << "NO";
            return 0;
        }
        if(s[i][i] != s[i][t-1-i]){
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            st[s[i][j]]++;
        }
    }
    if(st.size() != 2){
        cout << "NO";
        return 0;
    }
    if(st[s[0][0]] != 2*t -1){
        cout << "NO";
        return 0;
    }
    if(st[s[0][1]!= (t*t -(2*t -1)) ]){
        cout << "NO";
        return 0;
    }
    

        cout << "YES";
    return 0;
}
