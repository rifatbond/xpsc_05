#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int a[n];
    long long int sum=0;
    long long int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2!=0)
        {
            mn=min(mn,a[i]);
        } 
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum-mn<<endl;
    }
    
    return 0;
}