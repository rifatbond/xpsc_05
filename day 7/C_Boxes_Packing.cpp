#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    mp[a[i]]++;
   }
   int mx=INT_MIN;
   for(auto ap:mp)
   {
      mx=max(mx,ap.second);
   }
   cout<<mx<<endl;

    return 0;
}