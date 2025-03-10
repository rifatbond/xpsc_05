#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>s;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
       s.push_back(a);
        
    }
    
    map<string,int>mp;
    string s1=" ";
    for(int i=n-1;i>=0;i--)
    {
        if(mp[s[i]]==0)
        {
            string k=s[i];
            s1+=k[k.size()-2];
            s1+=k[k.size()-1];
          
        }
        mp[s[i]]++;
       
        

    }
    cout<<s1<<endl;
     
    
    return 0;
}