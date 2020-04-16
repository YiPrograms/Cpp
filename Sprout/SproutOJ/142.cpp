#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int a[1005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i=1; i<=n; i++) cin >> a[i];
        if (k==1) {
            int ans=0;
            for (int i=1; i<=n; i++) ans+=a[i];
            cout << ans << "\n";
        } else {
            memset(dp, 0, sizeof(dp));
            for (int i=1; i<=n; i++) {
                dp[i][0]=dp[i-1][k-1]+a[i];
                for (int j=1; j<=k-1; j++) {
                    dp[i][j]=dp[i-1][j-1];
                }
                dp[i][k-1]=max(dp[i-1][k-1], dp[i-1][k-2]);
            }
            cout << *max_element(dp[n], dp[n]+k) << "\n";
        }
    }
}
