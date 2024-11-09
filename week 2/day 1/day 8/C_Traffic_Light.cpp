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
        char c;
        cin>>c;
        string s;
        cin>>s;
        s=s+s;
        int cnt=INT_MIN;
        int index=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='g')
            {
                index=i;
            }
            if(s[i]==c && i<n)
            {
                cnt=max(index-i,cnt);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}