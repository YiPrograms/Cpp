#include <bits/stdc++.h>
using namespace std;

const int INF=1e9;
int e[505][505];
int dp[505][505];

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> e[i][j];
            if (e[i][j]==-1) dp[i][j]=e[i][j]=INF;
            else dp[i][j]=e[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        int chan=0;
        for (int j=0; j<n; j++) for (int k=0; k<n; k++) {
            dp[j][k]=min(dp[j][k], dp[j][i]+dp[i][k]);
            if (j<=i && k<=i)chan=max(chan, dp[j][k]);
        }
        cout << (chan==INF? -1: chan);
        if (i!=n-1) cout << " ";
        else cout << "\n";
    }
}
