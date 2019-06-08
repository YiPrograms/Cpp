#include <iostream>
#include <algorithm>
using namespace std;

const int INF=1e9;
int coins[]={0, 2, 5, 10, 20, 25};
int dp[6][1005];

int main() {
    int n;
    cin >> n;
    dp[0][0]=1;
    for (int i=1; i<=5; i++) {
        dp[i][0]=1;
        for (int j=1; j<=n; j++) {
            int res=0;
            for (int k=0; coins[i]*k<=j; k++) {
                res+=dp[i-1][j-coins[i]*k];
            }
            dp[i][j]=res;
        }
    }
    cout << dp[5][n] << "\n";
}
