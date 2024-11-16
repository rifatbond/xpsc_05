#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   multiset<int> ml;
   for (int i = 0;i<n;i++)
   {
      int x;
      cin >> x;
      ml.insert(x);
   }
   int ans = 0;
   int cnt = 1;
   while (!ml.empty())
    {
      auto it = ml.lower_bound(cnt);
      if (it != ml.end())
       {
        ml.erase(it);
         ans++;
         
      }
      else
       {
         break;
      }
      cnt++;
   }
   cout<<ans<<endl;

   return 0;
}