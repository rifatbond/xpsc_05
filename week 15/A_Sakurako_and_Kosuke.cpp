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
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt++;
        }
        if(cnt%2==0)
        {
            cout<<"Sakurako"<<endl;
        }
        else
        {
            cout<<"Kosuke"<<endl;
        }
    }
    return 0;
}