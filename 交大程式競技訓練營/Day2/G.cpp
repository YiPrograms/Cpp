#include <bits/stdc++.h>
using namespace std;

pair<int, vector<int>> e[105];


int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, m;
    while (cin >> n >> m) {
        if (n==0 && m==0) break;
        for (int i=1; i<=n; i++) {
            e[i].first=0;
            e[i].second.clear();
        }
        int t=n;
        while (m--) {
            int i, j;
            cin >> i>> j;
            e[i].second.emplace_back(j);
            e[j].first++;
        }
        queue<int> q;
        vector<int> ans;
        for (int i=1; i<=t; i++) {
            if (!e[i].first) {
                q.emplace(i);
            }
        }
        while (!q.empty()) {
            int u=q.front();
            q.pop();
            ans.emplace_back(u);
            for (int v:e[u].second) {
                e[v].first--;
                if (!e[v].first) q.emplace(v);
            }
        }
        for (int i:ans) cout << i << " ";
        cout << "\n";
    }
}
