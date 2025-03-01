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
      vector<string>v;
      int cnt=0;
      vector<int>v2;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
            for(int j=0;j<n;j++)
            {
                if(s[j]=='1')
                {
                    cnt++;
                }
            }
            if(cnt>0)
            {
            v2.push_back(cnt);
            }
            cnt=0;

        }
        bool flag=false;
        for(int i=0;i<v2.size()-1;i++)
        {
           
            if(v2[i]==v2[i+1])
            {
                flag=true;

            }
        
        }
        if(flag)
        {
            cout<<"SQUARE"<<endl;
        }
        else
        {
            cout<<"TRIANGLE"<<endl;
        }
      

    }
    return 0;
}