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
        string s;
        cin>>s;
        int cnt=0;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='+')
            {
                cnt++;
            }
            else
            {
                cnt2++;
            }
        }
        int res=abs(cnt-cnt2);
        cout<<res<<endl;

    }
    return 0;
}