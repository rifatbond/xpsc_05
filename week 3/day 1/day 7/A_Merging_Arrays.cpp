#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        v.push_back(b[i]);
    }
    sort(v.begin(),v.end());
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    
    return 0;
}