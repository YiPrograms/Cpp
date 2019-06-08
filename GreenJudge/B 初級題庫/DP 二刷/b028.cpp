#include <iostream>
#include <algorithm>
using namespace std;

const int INF=1e9;
int coins[]={1, 5, 10, 12, 16, 20};
int dp[105];

int main() {
    int n;
    cin >> n;
    dp[0]=0;
    for (int i=1; i<=n; i++) {
        int res=INF;
        for (int k=0; k<6; k++) {
            if (coins[k]>i) break;
            if (dp[i-coins[k]]==INF) continue;
            res=min(res, dp[i-coins[k]]);
        }
        dp[i]=res+1;
    }
    cout << dp[n] << "\n";
}
