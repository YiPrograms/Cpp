#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        map<char, int> mp;
        string s;
        cin >> s;
        for (char c:s) {
            mp[c]++;
        }
        string s2;
        bool ok=true;
        bool m=false;
        char mc;
        for (pair<char, int> p:mp) {
            if (p.second&1) {
                if (m) {
                    ok=false;
                    break;
                }
                m=true;
                mc=p.first;
                p.second-=1;
            }
            p.second /= 2;
            while (p.second--) {
                s2+=p.first;
            }
        }
        if (ok) {
            cout << s2;
            if (m) cout << mc;
            for (int i=s2.length()-1; i>=0; i--) cout << s2[i];
            cout << "\n";
        } else cout << "NPSCCSPN\n";
    }
}
