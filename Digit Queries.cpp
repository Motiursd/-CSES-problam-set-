#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long k;
        cin >> k;

        long long len = 1, cnt = 9, start = 1;

        
        while(k > len * cnt) {
            k -= len * cnt;
            len++;
            cnt *= 10;
            start *= 10;
        }

        
        long long num = start + (k - 1) / len;

        
        string s = to_string(num);
        cout << s[(k - 1) % len] << "\n";
    }
}
