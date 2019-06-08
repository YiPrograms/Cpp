#include <bits/stdc++.h>
using namespace std;

int a[105], S[105];
int dp[105][105];

int solve(int l, int r) {
    if (l==r) return 0;
    if (dp[l][r]) return dp[l][r];
    int res=1e9;
    for (int i=l; i<=r-1; i++) {
        res=min(res, solve(l, i)+solve(i+1, r));
    }
    return dp[l][r]=res+S[r]-S[l-1];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        memset(a, 0, sizeof(a));
        memset(S, 0, sizeof(S));
        memset(dp, 0, sizeof(dp));
        for (int i=1; i<=n; i++) {
            cin >> a[i];
            S[i]=S[i-1]+a[i];
        }
        cout << solve(1, n) << "\n";
    }   
}
