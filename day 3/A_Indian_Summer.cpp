#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string>s;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
       string k;
       
       getline(cin,k);
      s.insert(k);
      
    }
    int cnt=0;
    int sum=0;
     for(auto it=s.begin();it!=s.end();it++)
     {
       
        cnt++;

        
     }
     cout<<cnt<<endl;
    
    
    return 0;
}