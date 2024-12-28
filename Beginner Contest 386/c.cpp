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

    ll k,c=0;
    int i,j;
    string s, t;
    cin >> k >> s >> t;

    

    if (s.size() == t.size())
    {
        for (i = 0; i < s[i]; i++)
        {
            if (t[i] != s[i])
            {
                c++;   
            }
        }
        if(c > 1 )
        {
            cout<<No;
        }
        else
        {
            cout<<Yes;
        }
    }
    else if(t.size() > s.size())
    {
        if(t.size()-1 == s.size())
        {
            for(i=0;i<t.size()-1;i++)
            {
                if(t[i] != s[i])
                {
                    s.insert(s.begin()+i,t[i]);
                    break;
                }
            }
            if(i==t.size()-1)
            {
                s.insert(s.begin()+i,t[i]);
            }
            bool f1 = true;
             for(i=0;i<s.size();i++)
            {
                if(t[i] != s[i])
                {
                    f1=false;
                    break;
                }
            }
            cout<<(f1? Yes:No);
            
        }
        else
        {
            cout<<No;
        }
    }
    else if(t.size()<s.size())
    {
        bool f1 = true;
        for(i=0;i<t.size();i++)
        {
            if(s[i] != t[i])
            {
                s.erase(s.begin()+i);
                f1 = false;
                break;
            }
        }
        f1 = true;
        for(i=0;i<t.size();i++)
        {
            if(s[i] != t[i])
            {
                f1 = false;
                break;
            }
        }
        cout<<(f1? Yes:No);
    }
    
}
