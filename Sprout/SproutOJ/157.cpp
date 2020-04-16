#include <bits/stdc++.h>
using namespace std;

int a[105], b[105];
int dp[105][10005];
const int INF=1e9;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i=1; i<=n; i++) cin >> a[i] >> b[i];
        memset(dp, 0, sizeof(dp));
        for (int i=1; i<=10000; i++) dp[0][i]=INF;
        for (int i=1; i<=n; i++) {
            for (int j=0; j<=10000; j++) {
                dp[i][j]=dp[i-1][j];
                if (j>=b[i]) dp[i][j]=min(dp[i][j], dp[i-1][j-b[i]]+a[i]);
            }
        }
        int ans=0;
        for (int i=0; i<=10000; i++) {
            if (dp[n][i]<=m) ans=i;
        }
        cout << ans << "\n";
    }
}
