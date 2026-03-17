#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    vector<vector<long long>> dp(n, vector<long long>(n, 0));

    
    for(int i=0;i<n;i++){
        dp[i][i] = a[i];
    }

    
    for(int len=2; len<=n; len++){
        for(int l=0; l+len-1<n; l++){

            int r = l+len-1;

            dp[l][r] = max(
                a[l] - dp[l+1][r],
                a[r] - dp[l][r-1]
            );
        }
    }

    long long total = 0;
    for(auto x:a) total += x;

    long long diff = dp[0][n-1];

    cout << (total + diff)/2 << endl;
}
