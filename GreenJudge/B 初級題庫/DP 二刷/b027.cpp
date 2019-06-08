#include <iostream>
#include <algorithm>
using namespace std;

int a[105][105];
int dp[105][105];

int main() {
    int h, w;
    cin >> h >> w;
    int ans=0;
    for (int i=1; i<=h; i++) for (int j=1; j<=w; j++) cin >> a[i][j];
    for (int i=1; i<=h; i++) for (int j=1; j<=w; j++) {
        if (a[i][j]==1) continue;
        dp[i][j]=min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]))+1;
        ans=max(ans, dp[i][j]);
    }
    cout << ans*ans << "\n";
}
