#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s="abcdefghijklmnopqrstuvwxyz";
        vector<int>v;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=0;
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            for(auto p:mp)
            {
                if(p.second==v[i])
                {
                    cout<<p.first;
                    mp[p.first]++;
                    break;
                }
            }
                  
        }
      
        cout<<endl;
        
       
    }
    return 0;
}
