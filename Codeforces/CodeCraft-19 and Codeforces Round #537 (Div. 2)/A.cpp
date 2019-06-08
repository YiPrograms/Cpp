#include <bits/stdc++.h>
using namespace std;

bool isvow(char c) {
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main() {
    string s, t;
    cin >> s >> t;
    bool ok=true;
    if (s.length()!=t.length()) ok=false;
    else for (int i=0; i<int(s.length()); i++) {
        if (isvow(s[i])==isvow(t[i])) continue;
        ok=false;
        break;
    }
    if (ok) cout << "Yes\n";
    else cout << "No\n";
}
