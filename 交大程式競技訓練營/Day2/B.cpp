#include <bits/stdc++.h>
using namespace std;

int in[105], out[105];
vector<int> e[105];
int step=1;

void dfs(int u) {
    in[u]=step++;
    for (int v:e[u]) {
        if (!in[v]) dfs(v);
    }
    out[u]=step++;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int t=n;
    while (n--) {
        int u, k;
        cin >> u >> k;
        while (k--) {
            int v;
            cin >> v;
            e[u].emplace_back(v);
        }
    }
    for (int i=1; i<=t; i++) {
        if (!in[i]) dfs(i);
    }
    for (int i=1; i<=t; i++) {
        cout << i << " " << in[i] << " " << out[i] << "\n";
    }
}
