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
        cin >> s; 
        int index = -1;
        for (int i=0;i<s.size()-1; i++)
        {
            if (s[i]==s[i + 1])
            {
               index = i;             
            }
        }
        if(index == -1)
        {
            char j;
            for (char i='a'; i<='z';i++)
            {
                if (s[s.size()- 1] != i)
                {
                    j = i;
                    break;
                }
            }
            cout<<s<<j<<endl;
        }
        else
        {
 
            char k;
            for (char i='a';i<='z';i++)
            {
                if (s[index] != i)
                {
                    k = i;
                    break;
                }
            }
            for (int i=0;i<s.size();i++)
            {
                cout<<s[i];
                if (i == index)
                {
                    cout<<k;
                }
            }
            cout<<endl;
        }
    }
    return 0;    
}