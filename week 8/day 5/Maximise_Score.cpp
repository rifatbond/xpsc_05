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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i = 0;i<n - 1; i++)
        {
            a[i] = abs(a[i] - a[i + 1]);
        }
        int mn = INT_MAX;
        int mn2=min(mn, a[n- 2]);
        mn = min(a[0],mn2 );
        for (int i = 1; i < n- 1; i++)
        {
            int mx = max(a[i], a[i - 1]);
            mn = min(mn, mx);
        }
        cout<<mn<<endl;
    }
    return 0;
}
