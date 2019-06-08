#include <bits/stdc++.h>
using namespace std;

int a[6];

int main() {
    for (int i=0; i<6; i++) cin >> a[i];
    for (int i=5; i>=0; i--) {
        cout << a[i];
        if (i==0) cout << "\n"; else cout << " ";
    }
}
