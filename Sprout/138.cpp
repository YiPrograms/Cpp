#include <bits/stdc++.h>
using namespace std;

int dp[int(1e5)+5][5]={{},{0,1,1,0,0},{3,0,0,1,1}};
const int M=1000007;

int main() {
    for (int i=3; i<=int(1e5); i++) {
        dp[i][0]=(dp[i-1][2]+dp[i-1][1]+dp[i-2][0])%M;
        dp[i][1]=(dp[i-1][0]+dp[i-1][4])%M;
        dp[i][2]=(dp[i-1][0]+dp[i-1][3])%M;
        dp[i][3]=(dp[i-1][2])%M;
        dp[i][4]=(dp[i-1][1])%M;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n][0] << "\n";
    }
}
