#include <bits/stdc++.h>
using namespace std;

#define int long long
#define INF 1e18
using pii=pair<int, int>;

const int maxn=105;
int n; /// Number of vertexes
int s; /// Start point
int ep; /// End point
vector<pii> e[maxn]; /// Edges (e[u] -> {v, w})
bool vis[maxn]; /// Visited
int d[maxn]; /// Shortest distance

void init() { /// Needs to be called before inputing edges!
    for (int i=1; i<=n; i++) {
        d[i]=INF; /// Set all distances to INF
        e[i].clear();
        vis[i]=false;
    }
    d[s]=0;
}

void Dijkstra() {
    priority_queue<pii, vector<pii>, greater<pii>> pq; /// smallest {d, v}
    pq.emplace(0, s);
    while (!pq.empty()) {
        pii u=pq.top();
        pq.pop();
        if (u.second==ep) break;
        if (vis[u.second]) continue; /// u.second = id of u
        vis[u.second]=true;
        for (pii p:e[u.second]) { /// For each v
            int v=p.first, w=p.second;
            if (d[v]>d[u.second]+w) { /// Relax
                d[v]=d[u.second]+w; /// Update
                pq.emplace(d[v], v);
            }
        }
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int m, f;
        cin >> n >> m >> s >> ep >> f;
        init();
        while (m--) {
            int ai, bi, c1, di, c2;
            cin >> ai >> bi >> c1 >> di >> c2;
            int c=(f>di)? (f-di)*c2+di*c1: f*c1;
            e[ai].emplace_back(bi, c);
            e[bi].emplace_back(ai, c);
        }
        Dijkstra();
        cout << d[ep] << "\n";
    }
}
