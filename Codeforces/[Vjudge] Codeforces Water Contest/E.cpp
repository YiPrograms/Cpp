#include <bits/stdc++.h>
using namespace std;

int vowels[]={'A', 'O', 'Y', 'E', 'U', 'I'};
int diff='a'-'A';

int main() {
    string s;
    cin >> s;
    for (int c:s) {
        bool v=false;
        for (int i=0; i<6; i++) {
            if (c==vowels[i] || c==vowels[i]+diff) {
                v=true;
                break;
            }
        }
        if (v) continue;
        cout << "." << (char)(c<='Z'? c+diff: c);
    }
    cout << "\n";
}
