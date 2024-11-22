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
        cin>>n;
        vector<int>v;
        map<int,int>mp;
        for (int i = 0; i < n; i++)
         {
            int x;
            cin>>x;
           v.push_back(x);
        }    
        string s;
        cin>>s;
        vector<int>v2;
        vector<int>v3;
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == '1') 
            {
               v2.push_back(v[i]);
            }
            else 
            {
                v3.push_back(v[i]);
            }
        }
        sort(v2.rbegin(),v2.rend()); 
        sort(v3.rbegin(),v3.rend()); 
        for (int val:v2)
         {
            if (mp.find(val)== mp.end())
             {  
                mp[val]=n--;
            }
        }
        for (int val:v3) 
        {
            if (mp.find(val) == mp.end())
             { 
                mp[val]=n--;
            }
        }
        for (int val:v) 
        {
            cout<<mp[val]<<" ";
        }
        cout << endl;
    }
    return 0;
}