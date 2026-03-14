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
    char mid;
    
    for(int i=0;i<26;i++){
        if(freq[i]%2){
            odd++;
            mid = 'A'+i;
        }
    }

    if(odd > 1){
        cout << "NO SOLUTION";
        return 0;
    }

    string first = "";

    for(int i=0;i<26;i++){
        first += string(freq[i]/2 , 'A'+i);
    }

    string second = first;
    reverse(second.begin(), second.end());

    if(odd)
        cout << first << string(freq[mid-'A'], mid) << second;
    else
        cout << first << second;
}
