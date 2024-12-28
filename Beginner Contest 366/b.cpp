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

    vector <string> st,st2;
    string temp;
    ll x,i,j,big=0;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>temp;
        if(temp.size()>big)
        {
            big=temp.size();
        }
        st.push_back(temp);
    }
    for(i=0;i<big;i++)
    {
        temp.clear();
        for(j=x-1;j>=0;j--)
        {
            if(i>st[j].size()-1)
            {
                temp=temp + '*';
            }
            else
            {
                temp=temp+st[j][i];  
            }
           
        }
        st2.push_back(temp);
    }

    for(i=0;i<big;i++)
    {
        for(j=st2[i].size()-1;j>0;j--)
        {
            if(st2[i][j] == '*')
            {
                st2[i].pop_back();
            }
            else
            {
                break;
            }
        }
        
    }

    for(i=0;i<big;i++)
    {
        cout<<st2[i]<<nl;
    }
    
    
}