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
        int c,d;
        cin>>c>>d;
        int mx=max(a,b);
        int mx2=max(c,d);
        if(mx!=mx2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            int mn=min(a,b);
            int mn2=min(c,d);
            if(mx==mn+mn2)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        


    }
    return 0;
}