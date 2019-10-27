#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
        if (h<c) {
            swap(h, c);
            swap(p, f);
        }
        b/=2;
        if (b>p) {
            cout << p*h + min(b-p, f)*c << "\n";
        } else {
            cout << b*h << "\n";
        }
    }
}
