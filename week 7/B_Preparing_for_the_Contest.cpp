#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b==0)
        {
            for(int i=a;i>=1;i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
       for(int i=1;i<=b;i++)
       {
        cout<<i<<" ";
       }
       for(int i=a;i>b;i--)
       {
        cout<<i<<" ";
       }
       cout<<endl;
        }
    }
    return 0;
}