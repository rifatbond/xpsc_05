#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) 
    {
        long long int n,m,k;
        cin>>n>>m>>k;
        vector<long long int>v;
        vector<long long int>v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
           v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        for (int i = 0; i < m; i++) 
        {
           int x;
           cin>>x;
           v2.push_back(x);
        }
        sort(v2.rbegin(),v2.rend());
        long long cnt= 0;  
        int i=0;
        int j=0;
        while (i<n && j<m) 
        {
            long long  int cnt2 = min(v[i],v2[j]* k);
            cnt+=cnt2;  
            i++;
            j++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}