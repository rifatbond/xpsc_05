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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        set<int>a;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            a.insert(x);
        }
        string s2;
        cin>>s2;
        sort(s2.begin(),s2.end());
        int index=0;
        for(int val:a)
        {
           s[val-1]=s2[index];
           index++;
        }
        cout<<s<<endl;

    }
    return 0;
}