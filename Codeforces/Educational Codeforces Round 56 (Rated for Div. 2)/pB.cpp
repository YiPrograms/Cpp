#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >>s;
        bool isgood=false;
        for (int i=0; i<s.length()/2+1; i++) {
            if (s[i]!=s[s.length()-i-1]) {
                isgood=true;
                break;
            }
            if (i==0) continue;
            if (s[i]!=s[i-1]) {
                swap(s[i], s[i-1]);
                isgood=true;
                break;
            }
        }
        if (!isgood) cout << -1 << "\n";
        else cout << s << "\n";
    }
}
