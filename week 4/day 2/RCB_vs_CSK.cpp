#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res=a-b;
    if(res>=18)
    {
        cout<<"RCB"<<endl;
    }
    else
    {
        cout<<"CSK"<<endl;
    }
    return 0;
}