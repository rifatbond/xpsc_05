#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int mx=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            if(mx<a[i])
            {
                mx=a[i];
            }
        }
        cout<<mx+a[n-1]<<endl;

    }
    return 0;
}