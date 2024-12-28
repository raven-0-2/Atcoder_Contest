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

   string st;
   ll i,sum=0;
   cin>>st;
   for(i=0;i<st.size();)
   {
    if(st[i] == '0' && st[i+1] =='0' && i!=st.size()-1)
    {
        sum++;
        i+=2;
        
    }
    else
    {
        sum++;
        i++;
    }
   }
   cout<<sum;
    
}
