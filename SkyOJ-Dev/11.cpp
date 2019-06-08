#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string H;
        cin >> H;
        int res=0;
        for (int i=0; i<H.length(); i++) {
            res = res * 10 + (H[i] - '0');
            res %= 6;
        }
        cout << (res==0? "Nim": "Sam") << "\n";
    }
}
