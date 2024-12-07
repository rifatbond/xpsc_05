#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    while(t--) 
    {
        int n,k;
        cin >>n >>k;
       long long  int a[n];
        vector<long long int>v;
        for (int i = 0; i<n; i++) 
        {
            cin>>a[i];  
        }
        for (int i = 0;i<n;i++)
         {
            int x=a[i]+1;
            v.push_back(x+i);
        }
        sort(v.begin(),v.end());
        int cnt = 0;
        for (int i = 0;i<n;i++) 
        {
            if (k < v[i]) 
            {
                break;
            } 
            k-=v[i];
            cnt++;
        }
        cout<<cnt<<endl;  
    }

    return 0;    
}