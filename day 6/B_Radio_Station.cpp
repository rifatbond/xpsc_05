#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    string a,b;
    while(n--)
    {
        cin>>a>>b;
        b=b+";";
        mp[b]=a;
    }
    
    while(m--)
    {
        cin>>a>>b;
        mp[a]=b;
        
            cout<<a<<" "<<mp[a]<<" "<<"#"<<mp[b]<<endl;
        
        
    }
    return 0;
}