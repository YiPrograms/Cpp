#include <bits/stdc++.h>
using namespace std;

int a[200005];
multiset<int> ms;
set<int> s;
vector<pair<int, int>> rnk;
int main() {
    int n, k
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        ms.insert(a[i]);
        s.insert(a[i]);
    }
    for (int v:s) {
        rnk.emplace(ms.count(v), v);
    }
    sort(rnk.begin(), rnk.end());
    int cnt=0, d=0;
    for (auto v:rnk) {
        if (rnk[d].first/2>v.first) {
            cout << rnk[d++].second
        }
        if (++cnt==k) break;
    }
}
