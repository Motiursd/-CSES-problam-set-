#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    const long long MOD = 1000000007;
    long long ans = 1;

    for(int i = 0; i < n; i++){
        ans = (ans * 2) % MOD;
    }

    cout << ans;
}
