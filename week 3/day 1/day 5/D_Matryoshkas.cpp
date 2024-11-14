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
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            mp[v[i]]++;
            mp[v[i]+1];

        }
        int cnt=0;
        int cnt2=0;
        for(auto it:mp)
        {
           int val = it.second;    
            cnt+= max(0, val -cnt2); 
            cnt2=val;
        }
        cout<<cnt<<endl;
    }
    return 0;
}