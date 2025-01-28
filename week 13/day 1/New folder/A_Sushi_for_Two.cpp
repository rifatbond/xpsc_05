#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int cnt=1;
    long long int cur=0;
    long long int ans=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            cnt++;
        }
        else
        {
            ans=max(ans,2*min(cur,cnt));
            cur=cnt;
            cnt=1;

        }

    }
    ans=max(ans,2*min(cur,cnt));
   
    cout<<ans<<endl;
    return 0;
}