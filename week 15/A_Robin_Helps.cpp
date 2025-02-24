#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int cnt=0;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=k)
            {
                cnt+=v[i];
            }
            else if(v[i]==0 && cnt>0)
            {
                cnt--;
                cnt2++;
            }

        }
        cout<<cnt2<<endl;
       
       
        
           
        
    }
    return 0;
}