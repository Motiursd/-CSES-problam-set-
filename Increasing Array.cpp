#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     long long n;
     cin >> n;

      long long moves = 0;
      long long pre; long long current;
      cin >> pre;

      for(int i = 1; i < n; i++)
      {

        cin >> current;

          if(current < pre)
          {
              moves = moves + (pre - current);
          }

          else {
            pre = current;
          }
      }

       cout << moves << endl;
       return 0;
 }

