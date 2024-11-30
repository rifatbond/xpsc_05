#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,k;
    cin>>n>>k;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0;
    int r=0;
    long long int sum=0;
    int ans=0;
    while(r<n)
    {
        sum+=a[r];
        if(sum<=k)
        {
            ans=max(ans,r-l+1);

        }
        else
        {
            sum-=a[l];
            l++;
        }
        r++;

    }
    cout<<ans<<endl;
    
    return 0;
}