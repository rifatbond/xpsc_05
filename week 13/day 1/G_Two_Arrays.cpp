#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        long long int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n);
       
           
            int cnt=0;
            //sort(a,a+n);
            //sort(b,b+n);
            for(int i=0;i<n;i++)
            {
                if(a[i]+1==b[i] || (a[i]-b[i])==0)
                {
                    cnt++;
                }
            }

            if(cnt==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        

    }
    return 0;
}