#include <bits/stdc++.h>
using namespace std;

string s;
tuple<int, int, char> p[3005];
int dp[3005][3005][2];

int main() {
    int n, m;
    cin >> n >> m;
    cin >> s;
    s=" "+s;
    for (int i=1; i<=m; i++) {
        int ti, ci;
        char di;
        cin >> ti >> di >> ci;
        ci+=ti;
        p[i]=tie(ti, ci, di);
    }
    for (int i=1; i<=n; i++) if (s[i]=='?') dp[i][0][0]=dp[i][0][1]=2; else dp[i][0][0]=dp[i][0][1]=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            for (int k=1; k<=m; k++) {
                dp[i][j]+=dp[i-1]
            }
        }
    }
}
