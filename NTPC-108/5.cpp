#include <bits/stdc++.h>
using namespace std;

int a[1005][1005], S[1005][1005];

int main() {
    int n, m;
    cin >> m >> n;
    for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) cin >> a[i][j];
    for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) S[i][j]=S[i-1][j]+S[i][j-1]-S[i-1][j-1]+a[i][j];
    int k;
    cin >> k;
    while (k--) {
        int xa, xb, ya, yb;
        cin >> ya >> yb >> xa >> xb;
        cout << S[xb+1][yb+1]-S[xb+1][ya]-S[xa][yb+1]+S[xa][ya] << " \n"[k==0];
    }
}
