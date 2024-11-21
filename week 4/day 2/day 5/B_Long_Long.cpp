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
        long long int sum=0;
        bool flag=false;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            if(v[i]<0)
            {
                int j=v[i]*-1;
                sum+=j;
            }
            else
            {
                sum+=v[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]<0)
            {
                if(!flag)
                {
                flag=true;
                cnt++;
                }
                
            }
            else if(v[i]>0)
            {
                flag=false;
            }
        }
        cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}