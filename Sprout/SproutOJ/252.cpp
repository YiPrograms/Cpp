#include <bits/stdc++.h>
using namespace std;

vector<int> G[int(1e5)+5];
vector<pair<int, int>> E;
vector<int> Q[int(1e5)+5];
int adj[int(1e5)+5];

int main() {
    int n, m;
    cin >> n >> m;
    const int K=sqrt(m);
    for (int i=0; i<m; i++) {
        int x, y;
        cin >> x >> y;
        G[x].emplace_back(y);
        G[y].emplace_back(x);
        E.emplace_back(x, y);
    }
    for (int i=0; i<n; i++) {
        if (G[i].size()>K) continue;
        for (int x=0; x<G[i].size(); x++) {
            for (int y=x+1; y<G[i].size(); y++) {
                Q[G[i][x]].emplace_back(G[i][y]);
            }
        }
    }
    long long ans=0;
    for (int i=0; i<n; i++) {
        for (int v:G[i]) adj[v]=i+1;
        if (G[i].size()>K) {
            for (pair<int, int> p:E) {
                if (adj[p.first]==i+1 && adj[p.second]==i+1) ans++;
            }
        } 
        for (int y:Q[i]) {
            if (adj[y]==i+1) ans++;
        }
    }
    cout << ans/3 << "\n";
}
