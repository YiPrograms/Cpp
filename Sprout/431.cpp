#include <bits/stdc++.h>
using namespace std;
using pii=pair<long long, long long>;

const long long INF=1e18;
const int MAXN=2e5+5;
int n; /// Number of vertexes
vector<pii> e1[MAXN]; /// Edges (e[u] -> {v, w})
vector<pii> e2[MAXN]; /// Edges (e[u] -> {v, w})
bool vis[MAXN]; /// Visited
long long d1[MAXN]; /// Shortest distance
long long d2[MAXN]; /// Shortest distance

void init() { /// Needs to be called before inputing edges!
    for (int i=1; i<=n; i++) {
        d1[i]=INF; /// Set all distances to INF
        d2[i]=INF; /// Set all distances to INF
        vis[i]=false;
    }
}

void Dijkstra(int s, long long* d, vector<pii>* e) {
    priority_queue<pii, vector<pii>, greater<pii>> pq; /// smallest {d, v}
    pq.emplace(0, s);
    d[s]=0;
    while (!pq.empty()) {
        pii u=pq.top();
        pq.pop();
        if (vis[u.second]) continue; /// u.second = id of u
        vis[u.second]=true;
        for (pii p:e[u.second]) { /// For each v
            int v=p.first;
            long long w=p.second;
            if (d[v]>d[u.second]+w) { /// Relax
                d[v]=d[u.second]+w; /// Update
                pq.emplace(d[v], v);
            }
        }
    }
}


int32_t main() {
    int m, q;
    cin >> n >> m >> q;
    init();
    while (m--) {
        int ai, bi, wi;
        cin >> ai >> bi >> wi;
        e1[ai].emplace_back(bi, wi);
        e2[bi].emplace_back(ai, wi);
    }
    Dijkstra(1, d1, e1);
    memset(vis, 0, sizeof(vis));
    Dijkstra(n, d2, e2);
    while (q--) {
        int ci, di;
        cin >> ci >> di;
        cout << min(d1[n], d1[ci]+1+d2[di]) << "\n";
    }
}
