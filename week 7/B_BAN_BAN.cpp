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
        int res=(n+1)/2;
        cout<<res<<endl;
        int ind=0;
        for(int i=0;i<res;i++)
        {
            cout<<ind+1<<" "<<3*n<<endl;
            ind+=3;
            n--;
        }
        
    }
    return 0;
}