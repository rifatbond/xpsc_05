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
        vector<long long int>v;
        for(int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            v.push_back(x);
        }
        priority_queue<long long int>pq;
         long long int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                if(!pq.empty())
                {
                    cnt+=pq.top();
                    pq.pop();
                }
                else
                {
                   continue;
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}