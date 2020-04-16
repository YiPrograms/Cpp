#include <bits/stdc++.h>
using namespace std;

int a[1005], dp[1005][2];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i=1; i<=n; i++) cin >> a[i];
        memset(dp,0,sizeof(dp));
        for (int i=1; i<=n; i++) {
            dp[i][0]=max(dp[i-1][0], dp[i-1][1]);
            dp[i][1]=dp[i-1][0]+a[i];
        }
        cout << max(dp[n][0], dp[n][1]) << "\n";
    }
}
