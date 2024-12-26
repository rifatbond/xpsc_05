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
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int sum=0;
        for(int i=0;i<n-2;i++)
        {
            sum+=a[i];
        }
        long long int cnt=a[n-2]-sum;
          cnt=a[n-1]-cnt;
        cout<<cnt<<endl;

    }
    return 0;
}