#include <bits/stdc++.h>
using namespace std;

int a[int(1e5)+5];
vector<int> post[10005];
int cost[int(1e5)+5];
vector<int> tag[int(1e5)+5];
int cross[10005][10005];
int acost[int(1e5)+5];

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    const int K=sqrt(n);
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=m; i++) {
        int si;
        cin >> si;
        while (si--) {
            int id;
            cin >> id;
            post[i].emplace_back(id);
            cost[i]+=a[id];
        }
    }
    for (int i=1; i<=m; i++) {
        if (post[i].size()>K) {
            for (int u:post[i]) tag[u].emplace_back(i);
        }
    }
    for (int i=1; i<=n; i++) {
        for (int u:post[i]) {
            for (int v:tag[u]) {
                if (v==i) continue;
                cross[v][i]++;
            }
        }
    }
    while (q--) {
        string s;
        int k;
        cin >> s >> k;
        if (s=="QUERY") {
            if (post[k].size()>K) {
                cout << cost[k] << "\n";
            } else {
                int ans=0;
                for (int u:post[k]) ans+=a[u];
                for (int i=1; i<=m; i++) ans+=acost[i]*cross[i][k];
                cout << ans << "\n";
            }
        } else {
            int x;
            cin >> x;
            if (post[k].size()>K) {
                acost[k]+=x;
                cost[k]+=x*post[k].size();
                for (int i=1; i<=m; i++) {
                    cost[i]+=cross[k][i]*x;
                }
            } else {
                for (int u:post[k]) {
                    a[u]+=x;
                }
                for (int i=1; i<=m; i++) {
                    cost[i]+=cross[i][k]*x;
                }
            }
        }
    }
}
