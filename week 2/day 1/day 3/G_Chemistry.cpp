#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int cnt=0;
        for(auto c:mp)
        {
            if(c.second%2!=0)
            {
                cnt++;
            }
        }
        if(cnt>k+1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}