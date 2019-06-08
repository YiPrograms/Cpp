#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> c[int(1e5)+5];
int color[int(1e5)+5];
bool ok=true;

void dfs(int u, int col) {
    color[u]=col;
    for (int v:c[u]) {
        if (!ok) break;
        if (color[v]) {
            if (color[v]==col) ok=false;
            continue;
        }
        dfs(v, -col);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> n) {
        if (n==0) break;
        cin >> m;
        memset(color, 0, sizeof(color));
        for (int i=0; i<n; i++) c[i].clear();
        while (m--) {
            int a, b;
            cin >> a >> b;
            c[a].emplace_back(b);
            c[b].emplace_back(a);
        }
        ok=true;
        for (int i=0; i<n; i++) {
            if (!ok) break;
            if (!color[i]) dfs(i, 1);
        }
        if (ok) cout << "NORMAL.\n";
        else cout << "RAINBOW.\n";
    }
}
