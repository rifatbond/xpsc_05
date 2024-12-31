#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin>> s;
        map<char,int> mp; 
        for (int i = 0;i<n; i++) 
        {
            mp[s[i]]++;
        }
        vector<pair<int,char>>v;
        for (auto x : mp) 
        {
           v.push_back({x.second, x.first});
        }
        sort(v.rbegin(),v.rend());  
        string s2;
        s2.resize(n,'@');
        int idx= 0;
        for (auto val :v) 
        {
            int st = val.first;
            char c = val.second;
            while (st--) 
            {
                if (idx>= n) 
                {
                    idx = 1;
                }
                s2[idx] = c;
                idx += 2;

            }
        }
        cout<<s2<<endl;
    }
    return 0;
}