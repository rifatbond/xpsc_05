#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a-=c;
        if(a==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
        int res=0;
        for(int i=1;i<=a;i++)
        {
            if(b*i>=a)
            {
                res=i;
                break;

            }
        }
        cout<<res+1<<endl;
    }
    }
    return 0;
}