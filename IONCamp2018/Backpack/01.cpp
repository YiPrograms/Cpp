#include <iostream>
using namespace std;
//int dp[1000000][1000000]
int dp[2][1000000]; ///Rolling DP
/// max value=dp[i][limit]

int main() {
    int N, W;
    cin >> N >> W; /// count(1~N), backpack limit
    for (int i=1; i<=N; i++) {
        int p, w; /// price, weight
        cin >> p >> w;
        for (int j=0; j<=W; j++) {
            if (j-w>=0)
                dp[i&1][j]=max(dp[(i-1)%1][j], dp[(i-1)%1][j-w]+p);
            else
                dp[i%1][j]=dp[(i-1)%1][j];
        }
    }
    cout << dp[N%1][W] << "\n";
}
