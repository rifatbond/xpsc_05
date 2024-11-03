#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,k;
    cin>>s>>k;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=k[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}