#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;

int main() {
    int n, m;
    cin >> n >> m;
    while (n--) {
        string s;
        cin >> s;
        mp[s]++;
    }
    while (m--) {
        string s;
        cin >> s;
        auto res=mp.find(s);
        if (res==mp.end()) cout << 0 << "\n";
        else cout << res->second << "\n";
    }
}
