#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
       if(s=="()")
       {
        cout<<"NO"<<endl;
       }
       else 
       {
         bool flag=false;
         for(int i=0;i<s.size();i++)
         {
            if(i+1<s.size() && s[i+1]=='(' && s[i]==')')
            {
                flag=true;
            }
         }
         if(flag)
         {
            cout<<"YES"<<endl;
            for(int i=0;i<s.size();i++)
            {
                cout<<"(";
            }
            for(int i=0;i<s.size();i++)
            {
                cout<<")";
            }
         }
         else
         {
            cout<<"YES"<<endl;
            for(int i=0;i<s.size();i++)
            {
                cout<<"()";
            }
         }
         cout<<endl;
       }
    }
    return 0;
}