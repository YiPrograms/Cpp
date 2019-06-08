#include <bits/stdc++.h>
using namespace std;

const int M=1000000007;
int dp[2005][2005];
int S[2005][2005];

int main() {
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    dp[0][a]=1;
    for (int i=a; i<=n; i++) S[0][i]=1;
    for (int i=1; i<=k; i++) {
        for (int y=1; y<=n; y++) {
            if (y<b) {
                //for (int x=1; x<y; x++) dp[i][y]=(dp[i][y]+dp[i-1][x])%M;
                //for (int x=y+1; x<=(y+b-1)>>1; x++) dp[i][y]=(dp[i][y]+dp[i-1][x])%M;
                dp[i][y]=(S[i-1][y-1]+0LL+S[i-1][(y+b-1)>>1]-S[i-1][y]+M)%M;
            } else if (y>b) {
                //for (int x=(y+b)/2+1; x<y; x++) dp[i][y]=(dp[i][y]+dp[i-1][x])%M;
                //for (int x=y+1; x<=n; x++) dp[i][y]=(dp[i][y]+dp[i-1][x])%M;
                dp[i][y]=(S[i-1][y-1]-S[i-1][((y+b)>>1)]+0LL+S[i-1][n]-S[i-1][y]+M)%M;
            }
            S[i][y]=(S[i][y-1]+dp[i][y])%M;
        }
    }
    //int ans=0;
    //for (int i=1; i<=n; i++) ans=(ans+dp[k][i])%M;
    cout << S[k][n] << "\n";
}
