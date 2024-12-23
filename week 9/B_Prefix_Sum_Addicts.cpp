#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,k;
        cin >> n>>k;
         long long int a[k+ 1];
        vector<long long int>v(n);
        for (int i =1; i<=k; i++)
        {
            cin >> a[i];
        }
        int j = n-1;
        if (n == 1 || k == 1)
        {
            cout << "Yes"<< endl;
            
        }
        else
        {
        for (int i =k; i > 1; i--)
        {
           int p= a[i]-a[i- 1];
           v[j]=p;
            j--;
        }
        while (j> 0)
        {
            v[j] = v[j + 1];
            a[1] -= v[j];
            j--;
        }
        bool flag=false ;
        v[0] = a[1]; 
        for (int i = 1; i<n; i++)
        {
            if (v[i]<v[i - 1])
            {
                flag= true ;
                break;
            }
        }
 
        if (!flag)
        {
             cout << "Yes" << endl;
        }   
        else
        {
             cout << "No" << endl;
        }
        }
           
    }
    return 0;
}