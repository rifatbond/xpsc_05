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
        string s;
        cin>>s;
        int cnt=0;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i==0 || s[i-1]!='0')
                {
                    cnt++;
                }

            }
            if(s[i]=='1')
            {
                if(i==0 || s[i-1]!='1')
                {
                    cnt2++;
                }
            }

        }
        int res=min(cnt,cnt2);
        cout<<res<<endl;
    }
    return 0;
}
 