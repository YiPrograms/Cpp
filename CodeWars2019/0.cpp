#include <bits/stdc++.h>
using namespace std;

int a[1005], b[1005];

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    while (q--) {
        int x;
        cin >> x;
        int ans=0;
        for (int i=0; i<=n; i++) {
            if (a[i]==x) {
                ans++;
                continue;
            }
            for (int j=0; j<m; j++) {
                if (b[j]==x-a[i]) ans++;
            }
        }
        cout << ans;
        if (q) cout << " "; else cout << "\n";
    }
}
