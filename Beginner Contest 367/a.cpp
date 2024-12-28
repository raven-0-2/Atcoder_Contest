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

    ll shout , bed,wake;
    cin>>shout>>bed>>wake;
    if(bed<=wake)
    {
        if(shout<bed || shout>wake)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
    else 
    {
        if(shout>=bed && shout <= 24 || shout>=0 && shout<=wake)
        {
            cout<<"NO"<<nl;
        }
        else
        cout<<"YES"<<nl;
    }

   
}