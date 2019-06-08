#include <iostream>
#include <algorithm>
using namespace std;

int dp[105][105];

int main() {
    int H, W;
    cin >> H >> W;
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            int k;
            cin >> k;
            if (k==1) dp[i][j]=0;
            else if (i==0 || j==0) dp[i][j]=1;
            else dp[i][j]=min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]))+1;
        }
    }
    int ans=0;
    for (int i=0; i<H; i++) {
        ans=max(ans, *max_element(dp[i], dp[i]+W));
    }
    cout << ans*ans << "\n";
}
