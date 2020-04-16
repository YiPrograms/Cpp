#include <bits/stdc++.h>
using namespace std;

char a[1005][1005];
int h, w;

void dfs(int x, int y) {
    if (a[x][y]=='#') return;
    a[x][y]='#';
    if (x+1<h) dfs(x+1, y);
    if (y+1<w) dfs(x, y+1);
    if (x-1>=0) dfs(x-1, y);
    if (y-1>=0) dfs(x, y-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> h >> w;
        for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> a[i][j];
        int ans=0;
        for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
            if (a[i][j]=='.') {
                ans++;
                dfs(i, j);
            }
        }
        cout << ans << "\n";
    }
}
