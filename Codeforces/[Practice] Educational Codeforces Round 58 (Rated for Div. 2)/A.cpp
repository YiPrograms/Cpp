#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int l, r, d;
        cin >> l >> r >> d;
        if (d<l) cout << d << "\n";
        else cout << (r%d? d*(int)ceil((double)r/d): d*(r/d+1)) << "\n";
    }
}
