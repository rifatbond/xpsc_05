#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res=a-b;
    if(res<0)
    {
        cout<<abs(res)+1<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
   
    return 0;
}