#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> e[10005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, st, en;
        cin >> n >> m >> k >> st >> en;
        for (int i=0; i<m; i++) {
            int u, v, c;
            cin >> u >> v >> c;
            e[u].emplace_back(v, c);
        }
        queue<pair<int, int>> q;
        vector<int> ans;
        int now=0;
        q.emplace(st, 0);
        while (!q.empty() && now<k) {
            int u, c;
            tie(u, c)=q.front();
            q.pop();
            if (u==en) {
                ans.emplace_back(c);
                now++;
                continue;
            }
            for (pair<int, int> v:e[u]) {
                q.emplace(v.first, c+v.second);
            }
        }
        for (int a:ans) cout << a << " ";
    }
}
