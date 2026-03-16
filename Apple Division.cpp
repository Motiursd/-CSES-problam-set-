#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<long long> a(n);

    for(int i=0;i<n;i++)
        cin >> a[i];

    long long total = 0;
    for(auto x : a) total += x;

    long long ans = LLONG_MAX;

    for(int mask=0; mask<(1<<n); mask++){

        long long sum = 0;

        for(int i=0;i<n;i++){
            if(mask & (1<<i))
                sum += a[i];
        }

        ans = min(ans, abs(total - 2*sum));
    }

    cout << ans;
}
