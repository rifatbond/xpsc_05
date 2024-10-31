#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; 
    stack<string>st;
    while(n--)
    {
        string s;
        cin>>s; 
        st.push(s);     
    }
    map<string,int>mp;
    while(!st.empty())
    {
        string name=st.top();
        st.pop();
        if(mp[name]==0)
        {
            cout<<name<<endl;
        }
        mp[name]++;
    }
}
