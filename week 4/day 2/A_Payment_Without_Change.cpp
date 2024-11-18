#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,s;
        cin>>a>>b>>n>>s;
        long long int ans=(a*n)+b;
        if(ans<s)
        {
            cout<<"NO"<<endl;
        }
        else
        {
           long long int res=s/n;
           long long int tes=res*n;
          long long int pes=s-tes;
           if(pes>b)
           {
             cout<<"NO"<<endl;
           
           }
           else
           {
             cout<<"YES"<<endl;
           
           }
        }
    }
    return 0;
}