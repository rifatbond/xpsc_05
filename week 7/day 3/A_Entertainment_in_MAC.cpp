#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long  int n;
        cin>>n;
        string s;
        cin>>s;
       string k=s;
       
       reverse(s.begin(),s.end());
       string j=s+k;
       if(s>=k)
       {
        cout<<k<<endl;
       }
       else
       {
        cout<<j<<endl;
       }
    }
    return 0;
}