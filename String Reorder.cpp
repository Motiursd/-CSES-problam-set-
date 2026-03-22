#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26,0);

    for(char c : s){
        freq[c-'A']++;
    }

    int odd = 0;
    char oddChar;

    for(int i=0;i<26;i++){
        if(freq[i] % 2 == 1){
            odd++;
            oddChar = 'A' + i;
        }
    }

    if(odd > 1){
        cout << "NO SOLUTION";
        return 0;
    }

    string half = "";

    for(int i=0;i<26;i++){
        half += string(freq[i]/2, 'A'+i);
    }

    string rev = half;
    reverse(rev.begin(), rev.end());

    string mid = "";
    if(odd == 1){
        mid += string(freq[oddChar-'A'], oddChar);
    }

    cout << half + mid + rev;
}
