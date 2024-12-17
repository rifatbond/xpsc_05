#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int t;
    cin>>t;
    while (t--) 
    {
        int a,b;
        cin>>a>>b;
         b*=4;
       int ans = 0; 
        while (1)
        {
            int cnt= 15;
          
          if(a== 0 && b== 0)
            {
                break;
            }
            if(b>= 8)
            {
                b=b-8;
                cnt=cnt-8;
            }
              
            else if(b!=0)
            {
                b=b-4;
                cnt=cnt-4;
            }
            if(cnt<a)
            {
                a=a-cnt;
            }
            else
            {
                a=0;
            }
            ans++;
          
        }
          cout<<ans<<endl;   
    }
    return 0;
}