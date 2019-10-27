#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool ok=false;
        for (int i=a+1; i<b; i++) {
            if (i%c) {
                if (ok) cout << " ";
                else ok=true;
                cout << i;
            }
        }
        if (!ok) cout << "No free parking spaces.";
        cout << "\n";
    }
}
