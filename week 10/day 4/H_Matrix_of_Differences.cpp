#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int>v;
        int l = n * n;
        int  r = 1;
        while (l >= r) 
        {
            if (l == r)
                v.push_back(r);
            else
             {
                v.push_back(l);
                v.push_back(r);
            }
            l--;
            r++;
        }
        stack<int> st;
        queue<int> q;
        int j = 0;
        for (int i = 1; i <= n; i++) 
        {
            
            int k = 0;
 
            while (k<n) 
            {
                if (i % 2 == 0)
                 { 
                    st.push(v[j]);
                } 
                else
                 { 
                    q.push(v[j]);
                }
                k++;
                j++;
            }
 
            if (!st.empty())
             {
                while (!st.empty())
                 {
                    cout << st.top() << " ";
                    st.pop();
                }
            }
             else
              {
                while (!q.empty()) 
                {
                    cout <<q.front()<< " ";
                    q.pop();
                }
            }
            cout << endl;
        }
    }
 
    return 0;    
}