 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        vector<pair<int,int>>v={{1,1},{1,-1},{-1,1},{-1,-1}};
        int mx=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                sum=a[i][j];
                for( auto [a1,b1]:v)
                {
                   
                    int x=i;
                    int y=j;
                    while(x+a1>=0 && y+b1>=0 && x+a1<n && y+b1<m)
                    {
                        x+=a1;
                        y+=b1;
                        sum+=a[x][y];

                    }
                    
                }
                mx=max(mx,sum);
            }
            
        }
        cout<<mx<<endl;
    }
     return 0;
 }