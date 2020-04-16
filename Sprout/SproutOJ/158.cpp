#include <bits/stdc++.h>
using namespace std;

int a[105], b[105];
int dp[105][105][1005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        for (int i=1; i<=n; i++) cin >> a[i] >> b[i];
        memset(dp, 0, sizeof(dp));
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                for (int w=0; w<=m; w++) {
                    dp[i][j][w]=dp[i-1][j][w];
                    if (j<=k && w>=a[i]) dp[i][j][w]=max(dp[i][j][w], dp[i-1][j-1][w-a[i]]+b[i]);
                }
            }
        }
        int ans=0;
        for (int i=0; i<=n; i++) ans=max(ans, dp[n][i][m]);
        cout << ans << "\n";
    }
}
