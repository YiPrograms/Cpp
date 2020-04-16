#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i=1; i<=n; i++) {
            cout << min(min(abs(i-1), abs(1+n-i)), abs(1-i-n)) << "\n";;
        }
    }
}
