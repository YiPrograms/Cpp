#include <bits/stdc++.h>
using namespace std;

int dq[100005];

int fnd(int v) {
    if (dq[v]==v) return v;
    return dq[v]=fnd(dq[v]);
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) dq[i]=i;
    while (m--) {
        int a, b;
        cin >> a >> b;
        dq[fnd(a)]=fnd(b);
    }
    int q;
    cin >> q;
    while (q--) {
            int a, b;
    cin >> a >> b;
        if (fnd(a)==fnd(b)) cout << "yes\n";
        else cout << "no\n";
    }
}
