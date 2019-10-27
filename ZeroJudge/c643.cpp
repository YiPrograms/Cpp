#include <bits/stdc++.h>
using namespace std;

bool ischild[100005];
vector<int> e[100005];
long long ans=0;

int dfs(int u) {
    int high=0;
    for (int v:e[u]) {
        high=max(high, dfs(v)+1);
    }
    ans+=high;
    return high;
}

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        int k;
        cin >> k;
        while (k--) {
            int ki;
            cin >> ki;
            e[i].emplace_back(ki);
            ischild[ki]=true;
        }
    }
    int root=-1;
    for (int i=1; i<=n; i++) {
        if (ischild[i]) continue;
        root=i;
        break;
    }
    dfs(root);
    cout << root << "\n" << ans << "\n";
}
