#include <bits/stdc++.h>
using namespace std;

int a[105];

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=1; i<n; i++) {
        if (abs(a[i]-a[i-1])>=2) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
