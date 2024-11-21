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
       long long int n,k,q;
        cin>>n>>k>>q;
       long long int a[n];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i=0;
        int j=0;
       while (i<n) 
        {
            if (a[i]>q) 
            {
                j= i+ 1;  
            }
            int index=i-j+1;
            if (index>=k) 
            {
                cnt+=(index-k+1);
            } 
            i++;  
        }
        cout<<cnt<<endl;
    }
    return 0;
}