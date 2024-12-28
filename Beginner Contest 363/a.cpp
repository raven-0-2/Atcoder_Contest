#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void raven()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{

    raven();

    ll x;
    cin>>x;
    if(x<=99)
    {
        cout<<100-x;
    }
    else if(x>99 && x<=199)
    {
        cout<<200-x;
    }
    else if(x>199 && x<=299)
    {
        cout<<300-x;
    }
}