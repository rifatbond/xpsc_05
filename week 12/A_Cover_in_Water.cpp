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
        int cnt=0;
        int cnt2=0;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                cnt++;
                cnt2++;
            }
            else
            {
                cnt2=0;
            }
            if(cnt2==3)
            {
                flag=false;
                break;
            }  
        }
        if(flag)
        {
            cout<<cnt<<endl;
           
        }
        else
        {
             cout<<"2"<<endl;
            
        }
    }
    return 0;
}