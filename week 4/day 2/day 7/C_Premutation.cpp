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
        int a[n][n-1];
         map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>a[i][j];
            }
        }
        long long int res;
         map<int, int>mp2;
        for (int i = 0; i<n; i++)
        {
            mp[a[i][0]]++;
            if (mp[a[i][0]] ==n- 1)
            {
                res = a[i][0];
                break; 
            }
        }
        vector<int>v;
        v.push_back(res);
        for (int i = 0; i<n-1; i++)
        {
            for (int j=0;j<n; j++)
            {
                if (a[j][i] != res)
                {
                    if(mp2[a[j][i]]==0)
                    {
                       mp2[a[j][i]]++;
                        v.push_back(a[j][i]);
                    }
                }
            }
        }
        for(auto val: v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
 
    return 0; 
}
    