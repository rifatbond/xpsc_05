#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size()==4)
    {
        cout<<s;
    }
    else 
    {
        string s2;
        if(s.size()==3)
        {
            s2="0";
        }
        else if(s.size()==2)
        {
            s2="00";
        }
        else
        {
            s2="000";
        }

       cout<<s2+s<<endl;
          
    }
    
      
    return 0;
}