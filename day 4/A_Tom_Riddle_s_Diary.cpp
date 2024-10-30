#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int n;
    cin>>n;
    while(n--)
    {
        string name;
        cin>>name;
        if(mp[name]==0) 
        {  
        cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
        mp[name]++;       
    }
    return 0;
}