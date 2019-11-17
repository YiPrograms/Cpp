#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    while (m--) {
        int i;
        cin >> i;
        cout << s[i-1];
    }
    cout << "\n";
}
