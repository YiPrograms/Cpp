#include <bits/stdc++.h>
using namespace std;

int a[55];

int main() {
    int n, k;
    cin >> n >> k;
    int ans=0;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++) {
        if (a[i]>0 && a[i]>=a[k]) ans++;
    }
    cout << ans << "\n";
}
