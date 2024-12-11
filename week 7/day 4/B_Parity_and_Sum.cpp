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
       long long int a[n];
       int cnt=0;
       int cnt2=0;
       long long int ev=-1;
       long long int odd=-1;
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
        if(a[i]%2==0)
        {
            cnt++;
            ev=max(ev,a[i]);
        }
        else 
        {
            cnt2++;
            odd=max(odd,a[i]);
        }

       }
       if(cnt==n || cnt2==n)
       {
         cout<<"0"<<endl;
       }
       else 
       {
          sort(a,a+n);
          for(int i=0;i<n;i++)
          {
            if(a[i]%2==0 && a[i]<odd)
            {
                odd+=a[i];
            }
          }
         
          if(ev>odd)
          {
            cnt++;
          }
          cout<<cnt<<endl;
       
       }
       
    }
    return 0;
}