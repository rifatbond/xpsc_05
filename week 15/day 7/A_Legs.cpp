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
        int res=n/2;
        int pes=(n%4)/2;
        int tes=n/4;
        int pes2=pes+tes;
        int result=min(res,pes2);
        cout<<result<<endl;

    }
    return 0;
}