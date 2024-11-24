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
        int a,b,c;
        cin>>a>>b>>c;
        int res=abs(a-1);
        int tes=abs(b-c);
        int pes=abs(c-1);
        if(tes+pes==res)
        {
            cout<<"3"<<endl;
        }
        else if(res>tes+pes)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }

    }
    return 0;
}