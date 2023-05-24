#include <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;

int main()
{
    ll t, count=1;
    cin >> t;
    vector<int> pro;
    vector<int> maths;
    vector<int> sports;
    while (t--)
    {
        int x;
        cin >> x;
        switch(x){
            case 1:
                pro.push_back(count);
                break;
            case 2:
                maths.push_back(count);
                break;
            case 3:
                sports.push_back(count);
                break;
        }
        count++;
    }
    cout << min(pro.size(), min(maths.size(), sports.size()))<<endl;
    while (!pro.empty() && !maths.empty() && !sports.empty())
    {
        cout << pro.back() << " " << maths.back() << " " << sports.back();
        pro.pop_back();
        maths.pop_back();
        sports.pop_back();
        cout << endl;
    }
    



    return 0;
}
