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
        int n;
        cin>>n;
        int a=n;
        int b=n-1;
        cout<<"2"<<endl;
        for(int i=1;i<n;i++)
        {
             cout<<a<<" "<<b<<endl;
             int res=a+b+1;
             a=res/2;
            b--;
        }
        
    }
    return 0;
}