#include <bits/stdc++.h>
using namespace std;

string a[105];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n) {
        if (n==0) break;
        cin.get();
        for (int i=0; i<n; i++) getline(cin, a[i]);
        int m=a[0].length();
        queue<tuple<int, int, int>> q;
        for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
            if (a[i][j]=='K') {
                q.emplace(i, j, 0);
                a[i][j]='#';
                break;
            }
        }
        int ans=-1;
        while (!q.empty()) {
            int x, y, d;
            tie(x, y, d)=q.front();
            q.pop();
            if (d>0 && a[x][y]=='#') continue;
            if (a[x][y]=='@') {
                ans=d;
                break;
            }
            a[x][y]='#';
            q.emplace(x+1, y, d+1);
            q.emplace(x-1, y, d+1);
            q.emplace(x, y+1, d+1);
            q.emplace(x, y-1, d+1);
        }
        if (ans==-1) cout << "= =\"\n";
        else cout << ans << "\n";
    }
}
