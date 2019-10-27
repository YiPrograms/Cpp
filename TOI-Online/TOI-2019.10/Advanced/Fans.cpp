#include <bits/stdc++.h>
using namespace std;

using pii=pair<int, int>;

pii fans[int(1e5)+5];

bool cmp(const pii &a, const pii &b) {
    if (a.second==b.second) return a.first<b.first;
    return a.second>b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) fans[i].first=i;
    while (m--) {
        int i, x;
        cin >> i >> x;
        fans[i].second+=x;
    }
    sort(fans, fans+n, cmp);
    for (int i=0; i<n; i++) {
        cout << fans[i].first << " " << fans[i].second << "\n";
    }
}
