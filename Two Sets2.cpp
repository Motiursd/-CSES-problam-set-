#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, target, sum;

    cin >> n;

    sum = (n * (n + 1)) / 2;

    if(sum % 2 != 0)
    {
        cout << "NO";
        return 0;
    }

    cout << "YES" << endl;

    target = sum / 2;

    cout << target << endl;

    return 0;
}
