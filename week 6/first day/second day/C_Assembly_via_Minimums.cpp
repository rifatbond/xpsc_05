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
        long long int k=(n*(n-1))/2;
        long long int a[k];
        vector<long long int>v;
        int sum=n-1;
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        for(int i=0;i<k;i++)
        {
            v.push_back(a[i]);
            sum--;
            i+=sum;

        }
        v.push_back(1000000000);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

        
    }
    return 0;
}