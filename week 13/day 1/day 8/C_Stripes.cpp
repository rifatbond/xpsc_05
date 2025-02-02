#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;   
    while (t--) 
    {
        char c[8][8];
        for (int i = 0; i < 8; i++)
         {
            for (int j = 0; j < 8; j++)
             {
                cin >> c[i][j];
            }
        }

        for (int i = 0; i < 8; i++)
         {
           bool flag = true;
            for (int j = 0; j < 8; j++)
             {
                if (c[i][j] != 'R')
                 {
                    flag = false;
                    break;   
                }
            }
            if (flag) 
            { 
                cout << "R" << endl;
                break;
            }
            
        }
        for (int j = 0; j < 8; j++) 
        {
            bool flag2 = true;
            for (int i = 0; i < 8; i++)
             {
                if (c[i][j] != 'B')
                 {
                    flag2 = false;
                    break; 
                }
            }
            if (flag2)
             { 
                cout << "B" << endl;
               break;
            }
        }

        
    }

    return 0;
}
