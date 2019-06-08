#include <iostream>
using namespace std;

long long int dp[95]={0, 1, 2};

int main() {
    int n;
    cin >> n;
    for (int i=3; i<=n; i++) dp[i]=dp[i-1]+dp[i-2];
    cout << dp[n] << " " << dp[dp[n]%n] << "\n";
}
