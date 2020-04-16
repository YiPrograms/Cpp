#include <bits/stdc++.h>
using namespace std;

int m[int(1e5)+5], f[int(1e5)+5];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i=0; i<n; i++) cin >> m[i];
        for (int i=0; i<k; i++) cin >> f[i];
        sort(m, m+n);
        sort(f, f+k);
        int ans=0;
        int mi=0, now=0;
        bool ok=true;
        for (int i=0; i<k; i++) {
            while (now+f[i]>m[mi]) {
                now=0;
                mi++;
                if (mi>=n) {
                    ok=false;
                    break;
                }
            }
            if (!ok) break;
            now+=f[i];
            ans++;
        }
        cout << ans << "\n";
    }
}
