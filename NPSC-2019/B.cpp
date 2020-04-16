#include <bits/stdc++.h>
using namespace std;

const int mxn=1e5+5;

int x[mxn], y[mxn], t[mxn], p[mxn], q[mxn], c[mxn], v[mxn];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> x[i] >> y[i] >> t[i];
    for (int i=0; i<m; i++) cin >> p[i] >> q[i] >> c[i] >> v[i];
    for (int i=0; i<n; i++) {
        int res=-1;
        for (int j=0; j<m; j++) {
            if (abs(x[i]-p[j])+abs(y[i]-q[j])<=c[j]-t[i]) {
                res=max(res, v[j]);
            }
        }
        cout << res << "\n";
    }
}
