#include <bits/stdc++.h>
using namespace std;

int cnt['z'+1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        memset(cnt+'a', 0, sizeof(int)*26);
        string s;
        cin >> s;
        for (char c:s) {
            cnt[c]++;
        }
        cout << *max_element(cnt+'a', cnt+'z'+1) << "\n";
    }
}
