#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s = "AtCoder", t = "Land", x, y;
    int i;
    bool flag = true;
    cin >> x >> y;

    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != x[i])
        {
            flag = false;
        }
    }
    for (i = 0; i < t.size(); i++)
    {
        if (t[i] != y[i])
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}