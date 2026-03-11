#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long z = max(y, x);
        long long ans;

        if (z % 2 == 0) {
            if (z == y) {
                ans = z * z - (x - 1);
            } else {
                ans = (z - 1) * (z - 1) + y;
            }
        } else {
            if (z == x) {
                ans = z * z - (y - 1);
            } else {
                ans = (z - 1) * (z - 1) + x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

