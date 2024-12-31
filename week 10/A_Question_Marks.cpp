#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--)
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int cnt;
   int sum=0;
   string s1="ABCD";
   for (int i = 0;i<4; i++)
   {
    cnt=0;
    for (int j = 0; j < s.size();j++)
    {
        if(s1[i]==s[j])
        {
        cnt++;
        }
    }
    sum+=min(cnt,n);
   }
   cout<<sum<<endl;
 
 }
    
    return 0;    
}