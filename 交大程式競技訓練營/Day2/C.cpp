#include <bits/stdc++.h>
using namespace std;

int dist[105];
vector<int> e[105];
queue<int> q;
int step=1;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    for(int i=0; i<105; i++) dist[i]=-1;
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
    dist[1]=0;
    q.emplace(1);
    while (!q.empty()) {
        int u=q.front();
        q.pop();
        for (int v:e[u]) {
            if (dist[v]==-1) {
                q.emplace(v);
                dist[v]=dist[u]+1;
            }
        }
    }
    for (int i=1; i<=t; i++) {
        cout << i << " " << dist[i] << "\n";
    }
}
