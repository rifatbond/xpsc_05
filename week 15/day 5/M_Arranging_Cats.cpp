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
        string a,b;
        cin>>a>>b;
        int cnt=0;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='0' && b[i]=='1')
            {
                cnt++;
            }
            else if(a[i]=='1' && b[i]=='0')
            {
                cnt2++;
            }
        }
        cout<<max(cnt,cnt2)<<endl;

    }
    return 0;
}