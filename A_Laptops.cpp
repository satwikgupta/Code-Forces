#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()

{

    int a;
   
   bool j = true;

    cin >> a;

    for (int i = 0; i < a; i++)
    {

        int n1, n2;

        cin >> n1 >> n2;

        if (n2 < n1)
        {
            j = false;
        }
    }
    if (j != false)
    {
        cout << "Poor Alex" << endl;
    }
    else
    {
        cout << "Happy Alex" << endl;
    }

    return 0;
}