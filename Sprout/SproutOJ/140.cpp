#include <bits/stdc++.h>
using namespace std;

int dp[int(1e5)+5][3][3]={{},{{1,0,0},{0,1,0},{0,0,1}}};
const int M=1000007;

int main() {
    for (int i=2; i<=int(1e5); i++) {
        dp[i][0][0]=(dp[i-1][0][0]+dp[i-1][0][1]+dp[i-1][0][2])%M;
        dp[i][1][0]=(dp[i-1][1][0]+dp[i-1][1][1]+dp[i-1][1][2])%M;
        dp[i][2][0]=(dp[i-1][2][0]+dp[i-1][2][1]+dp[i-1][2][2])%M;

        dp[i][0][1]=(dp[i-1][0][0]+dp[i-1][0][1])%M;
        dp[i][1][1]=(dp[i-1][1][0]+dp[i-1][1][1])%M;
        dp[i][2][1]=(dp[i-1][2][0]+dp[i-1][2][1])%M;

        dp[i][0][2]=(dp[i-1][0][0]+dp[i-1][0][2])%M;
        dp[i][1][2]=(dp[i-1][1][0]+dp[i-1][1][2])%M;
        dp[i][2][2]=(dp[i-1][2][0]+dp[i-1][2][2])%M;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (dp[n][0][0]+dp[n][0][1]+dp[n][0][2]+dp[n][1][0]+dp[n][1][1]+dp[n][2][0]+dp[n][2][2])%M << "\n";
    }
}
