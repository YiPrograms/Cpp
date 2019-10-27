#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;

char a[5005][5005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int h, w;
    cin >> h >> w;
    for (int i=1; i<=h; i++) for (int j=1; j<=w; j++) cin >> a[i][j];
    int n;
    cin >> n;
    queue<pair<int, int>> q;
    int now=0;
    for (int k=0; k<n; k++) {
        int ai, bi;
        cin >> ai >> bi;
        q.emplace(ai, bi);
        q.emplace(-1, -1);
        while (true) {
            int x, y;
            tie(x, y)=q.front();
            q.pop();
            if (x==-1) break;
            if (a[x][y]=='.' || a[x][y]=='Q') now++;
            a[x][y]='X';
            if (x+1<=h && a[x+1][y]=='.') {
                q.emplace(x+1, y);
                a[x+1][y]='Q';
            }
            if (x>1 && a[x-1][y]=='.') {
                q.emplace(x-1, y);
                a[x-1][y]='Q';
            }
            if (y+1<=w && a[x][y+1]=='.') {
                q.emplace(x, y+1);
                a[x][y+1]='Q';
            }
            if (y>1 && a[x][y-1]=='.') {
                q.emplace(x, y-1);
                a[x][y-1]='Q';
            }
        }
        cout << now << "\n";
    }
}
