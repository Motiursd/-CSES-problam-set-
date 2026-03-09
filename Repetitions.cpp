
#include<bits/stdc++.h>
using namespace std;

 int main()
 {
      string s;
      cin >> s;

       int Max_count = 1, Current_count = 1;

        for( int i = 1; i < s.length() ; i++)
        {
            if(s[i] == s[i-1])
            {
                Current_count++;
            }

             else {
                Current_count = 1;
             }


        if(Current_count > Max_count)
        {
        Max_count = Current_count;

        }
 }
          cout << Max_count << endl;

        return 0;


        }



