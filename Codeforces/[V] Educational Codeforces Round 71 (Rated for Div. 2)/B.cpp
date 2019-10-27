#include <bits/stdc++.h>
using namespace std;

int a[55][55], b[55][55];
vector<pair<int, int>> op;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) cin >> a[i][j];
    int k=0;
    for (int i=1; i<n; i++) for (int j=1; j<m; j++) {
        if (a[i][j] & a[i+1][j] & a[i][j+1] & a[i+1][j+1]) {
            op.emplace_back(i, j);
            k++;
            b[i][j]=b[i+1][j]=b[i][j+1]=b[i+1][j+1]=1;
        }
    }
    bool ok=true;
    for (int i=0; i<=n; i++) for (int j=0; j<=m; j++) {
        if (a[i][j]==b[i][j]) continue;
        ok=false;
        break;
    }
    if (ok) {
        cout << k << "\n";
        for (pair<int, int> v:op) {
            cout << v.first << " " << v.second << "\n";
        }
    } else {
        cout << -1 << "\n";
    }
}
