#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define Yes "Yes\n"
#define No "No\n"
#define ck cout << '*' << nl;
#define While \
    ll t;     \
    cin >> t; \
    while (t--)

void raven()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{

    raven();

    ll ar[4];
    cin >> ar[0] >> ar[1] >> ar[2] >> ar[3];
    sort(ar,ar+4);

    if(ar[0] == ar[1] && ar[1] == ar[2] && (ar[2] != ar[3]))
    {
        cout<<Yes;
    }
    else if(ar[0] != ar[1] && ar[1] == ar[2] && (ar[2] == ar[3]))
    {
        cout<<Yes;
    }
    else if((ar[0] == ar[1]) && (ar[2]==ar[3]) && (ar[0] != ar[3]))
    {
        cout<<Yes;
    }
    else
    {
        cout<<No;
    }

}
