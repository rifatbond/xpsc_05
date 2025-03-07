#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s,r;
        cin>>s>>r;
        int cnt=0;
        int cnt2=0;
        while(cnt<n && cnt2<m)
        {
             if(s[cnt]==r[cnt2])
             {
                cnt++;
             }
             cnt2++;
        }
        cout<<cnt<<endl;

    }
    return 0;
}