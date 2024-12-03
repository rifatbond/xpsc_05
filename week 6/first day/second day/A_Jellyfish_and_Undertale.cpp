#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n;
        cin>>a>>b>>n;
        long long int v[n];
       long long int sum=b-1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=min(1+v[i],a);

        }
        cout<<sum+1-n<<endl;
    }   
    return 0;
}