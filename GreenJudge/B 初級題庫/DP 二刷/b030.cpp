#include <iostream>
#include <algorithm>
using namespace std;

const int INF=1e9;
int l[105], s[105];
int dp[105][1005];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++) cin >> l[i] >> s[i];
    for (int i=1; i<=n; i++) {
        for (int j=0; j<=m; j++) {
            int res=dp[i-1][j];
            if (j>=l[i]) res=max(res, dp[i-1][j-l[i]]+s[i]);
            dp[i][j]=res;
        }
    }
    cout << dp[n][m] << "\n";
}
