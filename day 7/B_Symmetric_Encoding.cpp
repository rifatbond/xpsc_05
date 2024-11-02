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
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        string s2=s1;
        sort(s1.begin(),s1.end());
        map<char,char>mp;
        vector<char>v;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s1[i+1])
            {
                v.push_back(s1[i]);

            }
        }
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]= v[v.size()-i-1];
        }
        for(int i=0;i<n;i++)
        {
            cout<<mp[s2[i]];
        }
        cout<<endl;

    }
    return 0;
}