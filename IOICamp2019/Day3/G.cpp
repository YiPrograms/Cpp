#include <bits/stdc++.h>
using namespace std;

const int maxn=300005;
vector<int> e[maxn];

int dep[maxn];
vector<int> isdep[maxn];
int maxdeep;
int minleafdeep=1e9;
int minleaf=-1;

int ans[maxn];

void dfs(int u, int d) {
    dep[u]=d;
    isdep[d].emplace_back(u);
    maxdeep=max(maxdeep, d);
    for (int v:e[u]) {
        if (v!=1 && dep[v]==0) dfs(v, d+1);
    }
    if (e[u].empty()) {
        if (d<minleafdeep) {
            minleafdeep=d;
            minleaf=u;
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i=2; i<=n; i++) {
        int p;
        cin >> p;
        e[p].emplace_back(i);
    }
    dfs(1, 0);
    ans[minleaf]=1;
    int now=2;
    for (int i=maxdeep; i>=0; i--) {
        for (int u:isdep[i]) if (ans[u]==0) ans[u]=now++;
    }
    cout << minleafdeep << "\n";
    for (int i=1; i<=n; i++) cout << ans[i] << " ";
    cout << "\n";
}

