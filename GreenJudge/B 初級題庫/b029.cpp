#include <iostream>
#include <algorithm>
using namespace std;

int dp[6][1005];
int price[]={2, 5, 10, 20, 25};

int main() {
    int N;
    cin >> N;
    for (int i=1; i<=5; i++) {
        dp[i][0]=1;
        for (int j=1; j<=N; j++) {
            dp[i][j]+=dp[i-1][j]+dp[i][j-price[i-1]];
        }
    }
    cout << dp[5][N] << "\n";
}
