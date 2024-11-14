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
     int n;
     cin>>n;
     set<int>s;
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        s.insert(x);
     }
     
       if(s.size()==1 )
       {
        cout<<"YES"<<endl;
       }
       else 
       {
        auto it=s.begin();
         if(*it==0 && s.size()==2)
         {
            cout<<"YES"<<endl;
         }
         else
         {
            cout<<"NO"<<endl;
         }
       }
   }
   return 0;
   }