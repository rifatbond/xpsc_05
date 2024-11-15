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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        int index=k-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B')
            {  
                i+=index;
                cnt++;


            }         
        }
        cout<<cnt<<endl;
    }
    return 0;
}