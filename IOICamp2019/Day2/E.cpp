#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int> e[100005];

int main() {
    int n, q;
    cin >> n >> q;
    for (int k=0; k<n-1; k++) {
        int u, v, d;
        cin >> u >> v >> d;
        e[u].emplace_back(v, d);
        e[v].emplace_back(u, d);
    }

}
