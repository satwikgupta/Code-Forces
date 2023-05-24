#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    set<int> even;
    set<int> odd;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0){
            even.insert(i);
        }
        else{
            odd.insert(i);
        }
    }
    if(odd.size()==1){
        cout << *(odd.begin())+1;
    }
    if(even.size()==1){
        cout << *(even.begin())+1;
    }
    
    
    return 0;
}
