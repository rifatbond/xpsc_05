#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int res=n/2;
        int tes=b*res;
        int pes=n%2;
        int tes2=a*pes;
        int pres=n*a;
        int pres2=tes+tes2;
        int result=min(pres,pres2);
        cout<<result<<endl;
    }
    return 0;
}