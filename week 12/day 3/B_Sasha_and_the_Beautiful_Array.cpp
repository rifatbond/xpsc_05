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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            if(i-1>=0 && a[i]!=a[i-1])
            {
            int x=a[i]-a[i-1];
            sum+=x;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}