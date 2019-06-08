#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> e[105];
int d[105];

struct state {
    int v, w;
    bool operator > (const state &b) const {
        return w > b.w;
    }
    state(int a, int b) {
        v=a;
        w=b;
    }
};

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, m;
    while (cin >> n >> m) {
        if (n==0 && m==0) break;
        for (int i=1; i<=n; i++) {
            e[i].clear();
            d[i]=99999999;
        }
        while (m--) {
            int a,b,c;
            cin >> a >> b >> c;
            e[a].emplace_back(b, c);
            e[b].emplace_back(a, c);
        }
        priority_queue<state, vector<state>, greater<state>> pq;
        d[1]=0;
        pq.emplace(1, 0);
        while (!pq.empty()) {
            state p=pq.top();
            pq.pop();
            int u=p.v;
            if (d[u] < p.w) continue;
            if (u==n) break;
            for (auto i:e[u]) {
                if (d[i.first]>d[u]+i.second) {
                    d[i.first]=d[u]+i.second;
                    pq.emplace(i.first, d[i.first]);
                }
            }
        }
        cout << d[n] << "\n";
    }
}
