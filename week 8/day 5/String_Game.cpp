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
        int mn=INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else
            {
                cnt2++;
            }
        }
         mn=min({cnt,cnt2,mn});
        if(mn%2!=0)
        {
            cout<<"Zlatan"<<endl;
        }
        else
        {
            cout<<"Ramos"<<endl;
        }
       
    }
    return 0;
}