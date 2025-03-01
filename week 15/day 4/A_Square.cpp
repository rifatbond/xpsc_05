#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a1,a2,a3,a4,b1,b2,b3,b4;
        cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
        long long int ans=abs(b1-b2);
        long long int ans2=abs(a1-a2);
        long long int  result1=pow(ans,2);
        long long int result2=pow(ans2,2);
    
        if(b1==b2)
        {
            cout<<result2<<endl;
        }
        else
        {
        cout<<result1<<endl;
        }


    }
    return 0;
}