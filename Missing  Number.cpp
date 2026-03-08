#include <iostream>
using namespace std;

int main()
{
    long long n, sum = 0, x;
    cin >> n;


    long long total_sum = n * (n + 1) / 2;


    for (int i = 0; i < n - 1; i++)
        {
        cin >> x;
        sum += x;
    }


    cout << total_sum - sum << endl;

    return 0;
}

