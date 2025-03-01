#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        int cnt2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                cnt++;
            }
            else
            {
                cnt2++;
            }
        }
        int mx=max(cnt,cnt2);
        if(mx==cnt)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
    return 0;
}