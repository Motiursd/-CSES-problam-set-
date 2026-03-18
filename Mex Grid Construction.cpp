#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int val = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << val++ << " ";
        }
        cout << endl;
    }
}
