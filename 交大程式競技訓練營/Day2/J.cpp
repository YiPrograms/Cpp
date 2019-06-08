#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> e[50000*2+5];
int d[50000*2+5];

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
    int n, m, f, s, t;
    cin >> n >> m >> f >> s >> t;
        for (int i=1; i<=2*n; i++) {
            d[i]=99999999;
        }
        while (m--) {
            int a,b,c;
            cin >> a >> b >> c;
            e[a].emplace_back(b, c);
            e[b].emplace_back(a, c);
            e[a+n].emplace_back(b+n, c);
            e[b+n].emplace_back(a+n, c);
        }
        while (f--) {
            int a, b;
            cin >> a >> b;
            e[a].emplace_back(b+n, 0);
        }
        priority_queue<state, vector<state>, greater<state>> pq;
        d[s]=0;
        pq.emplace(s, 0);
        while (!pq.empty()) {
            state p=pq.top();
            pq.pop();
            int u=p.v;
            if (d[u] < p.w) continue;
            for (auto i:e[u]) {
                if (d[i.first]>d[u]+i.second) {
                    d[i.first]=d[u]+i.second;
                    pq.emplace(i.first, d[i.first]);
                }
            }
        }
        cout << min(d[t],d[t+n]) << "\n";
    }
