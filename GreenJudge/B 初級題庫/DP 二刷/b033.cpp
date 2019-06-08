#include <iostream>
#include <algorithm>
using namespace std;

const int INF=1e9;
string s1, s2;
int dp[105][105];

int main() {
    cin >> s1 >> s2;
    for (int i=1; i<=int(s1.length()); i++) {
        for (int j=1; j<=int(s2.length()); j++) {
            if (s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[s1.length()][s2.length()] << "\n";
}
