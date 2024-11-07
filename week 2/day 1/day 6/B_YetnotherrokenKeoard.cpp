#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        vector<int> v1;
        vector<int> v2;
        vector<int>v3;
        for (int i=0; i<len; i++)
        {
            if (s[i]>='A'&&s[i]<= 'Z')
            {
                if (s[i] == 'B')
                {
                    if (!v1.empty())
                    {
                        v1.pop_back();
                    }
                }
                else
                {
                    v1.push_back(i);
                }
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                if (s[i] == 'b')
                {
                    if (!v2.empty())
                    {
                        v2.pop_back();
                    }
                }
                else
                {
                    v2.push_back(i);
                }
            }
        }
        for (int i=0; i<v1.size();i++)
        {
            v3.push_back(v1[i]);
        }
        for (int i=0; i<v2.size(); i++)
        {
            v3.push_back(v2[i]);
        }
        sort(v3.begin(), v3.end());
        for (auto val : v3)
        {
            cout<<s[val];
        }
        cout<<endl;
    }
    return 0;    
}