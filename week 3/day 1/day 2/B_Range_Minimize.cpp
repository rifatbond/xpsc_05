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
       vector<int>v;
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
           int x;
           cin>>x;
           v.push_back(x);
        }
        sort(v.begin(),v.end());
        int val1=v[n-1]-v[2];
        int val2=v[n-2]-v[1];
        int val3=v[n-3]-v[0];
        mn=min({val1,val2,val3,mn});
        cout<<mn<<endl; 
        
    }
    return 0;
}