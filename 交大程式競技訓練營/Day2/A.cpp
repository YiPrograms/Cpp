#include <bits/stdc++.h>
using namespace std;

int a[105][105];

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int t=n;
    while (n--) {
        int u, k;
        cin >> u >> k;
        while (k--) {
            int v;
            cin >> v;
            a[u][v]=1;
        }

    }
    for (int i=1; i<=t; i++) {
            for (int j=1; j<=t; j++) {
                cout << a[i][j];
                if (j!=t) cout << " ";
            }
            cout << "\n";
    }
}
