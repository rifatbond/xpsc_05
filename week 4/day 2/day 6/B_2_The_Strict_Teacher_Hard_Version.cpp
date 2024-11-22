#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m,q;
        cin>> n>>m>> q;
        vector<int>v;
        for (int i = 0; i<m; i++)
        {
           int x;
           cin>>x;
           v.push_back(x);
        }
        sort(v.begin(),v.end());
        while (q--)
        {
            int a;
            cin>>a;
            int index = upper_bound(v.begin(), v.end(),a)-v.begin();
            
            if (index == m)
            {
                cout << n-v[index-1]<<endl;
            }
             else if (index == 0)
            {
                cout<<v[0] - 1<<endl;
            }
            else
            {
                cout << (v[index] - v[index - 1])/2 << endl;
            }
        }
    }
    return 0;    
}