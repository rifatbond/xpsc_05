#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int cnt=n-k+1;
        long long int odd=(n+1)/2;
        long long int odd2=odd-cnt/2;
        if(odd2%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
       
    

    }
    return 0;
}