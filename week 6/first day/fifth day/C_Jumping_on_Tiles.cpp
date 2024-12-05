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
        string s;
        cin >> s;
        int sz=s.size()-1;
        int k= abs(s[0]-s[sz]);
        char mn = min(s[0],s[sz]);
        char mx = max(s[0],s[sz]); 
        vector<pair<char,int>>pr;
        vector<int>v;
        for (int i = 0; i<s.size(); i++)
        {
            if (s[i] >= mn && s[i] <= mx)
            {
                pr.push_back({s[i], i+1});
            }
        }
        if (s[0]>s[sz])
        {
               for (char i= mx;i>= mn;i--)
            {
                for (auto p:pr)
                {
                    if (p.first==i)
                    {
                        v.push_back(p.second);
                    }
                }
            }
                
        }
        else
        {
            for (char i= mn;i<= mx;i++)
            {
             
             for (auto p:pr)
                {
                    if (p.first==i)
                    {
                        v.push_back(p.second);
                    }
                }
            }
           
            
        }
        cout <<k<<" "<<v.size()<<endl;
        for (int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
 
    
}