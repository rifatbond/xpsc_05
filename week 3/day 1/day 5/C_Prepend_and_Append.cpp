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
        string s;
        cin>>s;  
           int cnt=s.size();
           int cnt2=0;  
            for(int i=0;i<s.size();i++)
            {
                 
                if(s[i]==s[s.size()-i-1])
                {
                    break;
                }
                else
                {
                    cnt=cnt-2;
                }
                
            }
           if(cnt<0)
           {
            cout<<"0"<<endl;
           }
           else
           {
            cout<<cnt<<endl;
           }
           
        
    }
    return 0;
}