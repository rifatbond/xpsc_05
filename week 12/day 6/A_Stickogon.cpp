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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int cnt=0;
        for(auto m:mp)
        {
           int res=m.second/3;
           cnt+=res;
            
        }
        
        cout<<cnt<<endl;
    }
    return 0;
}