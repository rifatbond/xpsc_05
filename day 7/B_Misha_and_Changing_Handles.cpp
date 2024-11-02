#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   map<string, string> mp, mp2;
   for (int i = 1;i <= n;i++) 
   {
      string a,b;
      cin>>a>>b;
      if (mp2.find(a) != mp2.end()) 
      {
         string s = mp2[a];
         mp[s] = b;
         mp2.erase(a);
         mp2[b] = s;
      }
      else {
         mp[a] = b;
         mp2[b] = a;
      }
   }
   cout << mp.size() <<endl;
   for (auto [x, y] : mp)
    {
      cout << x << " " << y <<endl;
   }
   return 0;
}