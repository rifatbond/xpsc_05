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
        int cnt=0;
        int cnt2=0;
        int cnt3=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                cnt3++;
            }
            if(a[i]>0)
            {
                cnt++;
            }
            else
            {
                cnt2++;
            }
           
        }
        if(cnt+1>=cnt2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(cnt3==0)
            {
                cout<<"1"<<endl;
            }
            else if(cnt3==cnt)
            {
                cout<<"2"<<endl;
            }
            else 
            {
                cout<<"1"<<endl;
            }
           
        }
        


    }
    return 0;
}