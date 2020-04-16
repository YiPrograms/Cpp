#include <bits/stdc++.h>
using namespace std;
const int maxn=100005;

vector<int> child[maxn];
int siz[maxn];

int getsize(int x) {
    if (siz[x]) return siz[x];
    int xsiz=1;
    for (int y:child[x]) xsiz+=getsize(y);
    return siz[x]=xsiz;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i=1; i<=n; i++) child[i].clear();
        memset(siz, 0, sizeof(siz));
        while (m--) {
            int x, y;
            cin >> x >> y;
            child[x].emplace_back(y);
        }
        for (int i=1; i<=n; i++) getsize(i);
        int q;
        cin >> q;
        while (q--) {
            int x;
            cin >> x;
            cout << siz[x] << "\n";
        }
    }
}
