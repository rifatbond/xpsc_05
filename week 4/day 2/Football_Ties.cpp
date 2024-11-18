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
        int res=a%3;
        int tes=b%3;
        int result=min(res,tes);
        cout<<result<<endl;
    }
    return 0;
}