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

    ll total,i,a,b,small,remain;
    cin>>total>>a>>b;
    remain =total-(a+b);
    small=min(a,b);
    cout<<(remain>=small ? "NO" : "YES");
    
    
}