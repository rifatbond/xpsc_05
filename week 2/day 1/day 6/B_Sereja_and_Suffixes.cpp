#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int l;
    cin>>l;
    vector<int>v(n+1);
    vector<int>cnt(n+1);
    set<int>s;
    for(int i=1;i<=n;i++)
    {
       cin>>v[i];

    }
    for(int i=n;i>=1;i--)
    {
        s.insert(v[i]);
        cnt[i]=s.size();

    }
    for(int i=1;i<=l;i++)
    {
        int pos;
        cin>>pos;
        cout<<cnt[pos]<<endl;
    }

    return 0;
}