#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int a[n];
         int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        } 
        long long int sum=1;
        int k=1;
        for(int i=0;i<n;i++)
        {
            
            if(a[i]==mn && k==1)
            {
                a[i]+=1;
                k--;
            }
            sum*=a[i];


        }
        cout<<sum<<endl;
        }
    
    return 0;
}