#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        stack<int> st;
        int n, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == 0)
            {
                count += st.top();
                st.pop();
            }
            else if(st.top() < num)
            {
                st.push(num);
            }
        }
        cout << count << endl;
    }
    return 0;
}
