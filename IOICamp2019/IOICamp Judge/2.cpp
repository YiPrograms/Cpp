#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x>1000) cout << x-1000 << " " << 1000 << "\n";
        else cout << x << " " << 0 << "\n";
    }
}
