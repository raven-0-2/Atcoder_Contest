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

    ll sample , length, atlast,i;
    cin>>sample>>length>>atlast;
    ll ar[sample];
    for(i=0;i<sample;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<sample;i++)
    {
        ar[i]=length - ar[i];
    }
    sort(ar,ar+sample);
    cout<<(ar[atlast-1]>0 ? ar[atlast-1] : 0 );
}