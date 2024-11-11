#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int len1=a.size();
        int len2=b.size();
        char s1=a[len1-1];
        char s2=b[len2-1];
        if(a==b)
        {
            cout<<"="<<endl;
        }
        else if(s1=='L' && s2=='L')
        {
            if(len1>len2)
            {
                cout<<">"<<endl;
            }
            else if(len1<len2)
            {
                cout<<"<"<<endl;
            }
            
        }
        else if(s1=='S' && s2=='S')
        {
             if(len1>len2)
            {
                cout<<"<"<<endl;
            }
            else if(len1<len2)
            {
                cout<<">"<<endl;
            }
            

        }
        else if(s1=='M')
        {
            if(s2=='L')
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<">"<<endl;
            }
        }
        else if(s2=='M')
        {
            if(s1=='S')
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<">"<<endl;
            }
        }
        else
        {
            if(s1=='S')
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<">"<<endl;
            }
        }
      
      
       
    }
    return 0;
}