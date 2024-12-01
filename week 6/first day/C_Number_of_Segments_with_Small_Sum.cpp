#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0;
    int r=0;
    int ans=0;
    long long int sum=0;
    while(r<n)
    {
        sum+=a[r];
        if(sum<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(sum>k && l<r)
            {
                sum-=a[l];
                l++;
            }
            if(sum<=k)
        {
            ans+=(r-l+1);
        }

        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}