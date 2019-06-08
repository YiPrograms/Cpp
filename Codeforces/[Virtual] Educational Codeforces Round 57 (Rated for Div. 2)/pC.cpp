#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int ang;
        cin >> ang;
        ang*=2;
        for (int i=1; i<=ang; i++) {
            if (ang%i==0) {
                if (360%(ang/i)==0) {
                    if (i==360/(ang/i)-1) cout << 360/(ang/i)*2 << "\n"; else
                    cout << 360/(ang/i) << "\n";
                    break;
                }
            }
        }
    }
}

