#include <bits/stdc++.h>
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
        string s;
        cin >> s;
        string t = "";
        int i= n - 1; 
        while (i >= 0)
         {
            if (s[i] == '0') 
            {
               
                int num =s[i-2] -'0';
                int num2= s[i-1]-'0';
                int nm=num*10 +num2;
                t +=('a' + nm - 1);
                i= i-3; 
            } 
            else
             {
                int num = s[i] - '0';
                t += ('a' + num - 1);
                i--; 
            }
        }
        reverse(t.begin(),t.end());
        cout << t << endl; 
    }

    return 0;
}
