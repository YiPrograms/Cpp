#include <bits/stdc++.h>
using namespace std;

int n, m;
bool a[2005][2005];
#define INF 1e9
const int maxn=2001*2001;
using pii=pair<int, int>;

bool vis[maxn]; /// Visited
int d[maxn]; /// Shortest distance

void init() { /// Needs to be called before inputing edges!
    for (int i=0; i<n*m; i++) {
        d[i]=INF; /// Set all distances to INF
        vis[i]=false;
    }
}

int dx[]={1, -1, 0, 0},
    dy[]={0, 0, 1, -1};

void Dijkstra(int s, int ep) {
    priority_queue<pii, vector<pii>, greater<pii>> pq; /// smallest {d, v}
    pq.emplace(0, s);
    d[s]=0;
    while (!pq.empty()) {
        int u=pq.top().second;
        pq.pop();
        if (u==ep) break;
        if (vis[u]) continue; /// u.second = id of u
        vis[u]=true;
        for (int i=0; i<4; i++) { /// For each v
            int v=(u/m+dx[i])*m+(u%m+dy[i]);
            int w=a[v/m][v%m];
            if (d[v]>d[u]+w) { /// Relax
                d[v]=d[u]+w; /// Update
                pq.emplace(d[v], v);
            }
        }
    }
}


int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
        char c;
        cin >> c;
        if (c=='.') a[i][j]=true;
    }
    init();
    int is, js, it, jt;
    cin >> is >> js >> it >> jt;
    Dijkstra((is-1)*m+js-1, (it-1)*m+jt-1);
    cout << d[(it-1)*m+jt-1] << "\n";
}
