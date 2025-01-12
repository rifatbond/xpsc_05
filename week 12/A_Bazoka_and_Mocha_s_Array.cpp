#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t; 
    while (t--) 
    {
        int n;
        cin >> n; 
        vector<int>a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        vector<int>v= a;
        sort(a.begin(),a.end());
        bool flag = false;
        for (int i = 0; i < n; i++) 
        {
            bool flag2 = true;
            for (int j = 0; j < n; j++) 
            {
                if (v[(i+j)%n]!=a[j]) 
                {
                   flag2 = false;
                }
            }
            if (flag2) 
            {
               flag = true;
            }
        }
        if(flag)
         {
            cout<<"Yes"<<endl;
        }
         else 
         {
            cout <<"No"<< endl;
        }
    }
 
    return 0;     
}