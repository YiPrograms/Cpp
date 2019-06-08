#include <bits/stdc++.h>
using namespace std;

char a[105][105];
bool b[105][105];

int dx[]={0,1,-1, 0,1,-1, 1,-1},
    dy[]={1,0, 0,-1,1,-1,-1, 1};

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int m, n;
    while (cin >> m >> n) {
    if (m==0 && n==0) break;
    int ans=0;
    for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
        cin >> a[i][j];
        b[i][j]=false;
    }
    for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
        if (a[i][j]=='@' && !b[i][j]) {
            ans++;
            b[i][j]=true;
            queue<pair<int, int>> q;
            q.emplace(i, j);
            while (!q.empty()) {
                int c,d;
                tie(c, d)=q.front();
                q.pop();
                for (int k=0; k<8; k++) {
                    if (!b[c+dx[k]][d+dy[k]] && a[c+dx[k]][d+dy[k]]=='@') {
                        b[c+dx[k]][d+dy[k]]=true;
                        q.emplace(c+dx[k],d+dy[k]);
                    }
                }
            }
        }
    }
    cout << ans << "\n";}
}
