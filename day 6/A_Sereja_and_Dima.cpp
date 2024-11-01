#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    deque<int>dq;
    for(int i=0;i<n;i++)
    {
       int x;
       cin>>x;
       dq.push_back(x);
    }
    int ans1=0;
    int ans2=0;
    int w=1;
    
    while(!dq.empty())
    {
        int left=dq.front();
        int right=dq.back();
        int mx=max(left,right);
        if(w%2!=0)
        {
            ans1+=mx;
        }
        else
        {
            ans2+=mx;
        }
        if(mx==left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        w++;
    
    
    }
    cout<<ans1<<" "<<ans2<<endl;

    return 0;
}