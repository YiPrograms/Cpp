#include <bits/stdc++.h>
using namespace std;

const int MAXN=2e5+5;
using pil=pair<int, long long>;
using pli=pair<long long, int>;

vector<pil> e[MAXN];
bool vis[MAXN];
int n;
priority_queue<pli, vector<pli>, greater<pli>> pq; // {w, u}

long long MST() {
    while (!pq.empty() && vis[pq.top().second]) pq.pop();
    if (pq.empty()) return 0;
    pli u=pq.top();
    vis[u.second]=true;
    for (pil v:e[u.second]) pq.emplace(v.second, v.first);
    return u.first+MST();
}


int main() {
    int m;
    cin >> n >> m;
    while (m--) {
        int u, v, w;
        cin >> u >> v >> w;
        e[u].emplace_back(v, w);
        e[v].emplace_back(u, w);
    }
    vis[1]=true;
    for (pil v:e[1]) pq.emplace(v.second, v.first);
    cout << MST() << "\n";
}
