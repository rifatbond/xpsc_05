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
        map<int,int>mp;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=n-1;i>=0;i--)
        {
            if(mp[v[i]]==1)
            {
               int  index=i+1;
                cout<<index<<endl;
                cnt=1;
                break;

            }
            mp[v[i]]++;
        }
        if(cnt==0)
        {
            cout<<"0"<<endl;
        }

    }

    return 0;
}