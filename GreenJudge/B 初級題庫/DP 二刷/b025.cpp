#include <iostream>
using namespace std;

long long int dp[35][35];

int main() {
    int x, y;
    cin >> x >> y;
    for (int i=0; i<=x; i++) for (int j=0; j<=y; j++) {
        if (i==0 || j==0) dp[i][j]=1;
        else dp[i][j]=dp[i-1][j]+dp[i][j-1];
    }
    cout << dp[x][y] << "\n";
}
