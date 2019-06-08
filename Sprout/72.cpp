#include <bits/stdc++.h>
using namespace std;

int n;
long double a[15], b[15], c[15];

long double S(long double t) {
    long double res=0;
    for (int i=0; i<n; i++) {
        if (a[i]*(t-b[i])*(t-b[i])+c[i]>res) res=a[i]*(t-b[i])*(t-b[i])+c[i];
    }
    return res;
}

long double tris(long double l, long double r) {
    if (r-l<1e-10) return S(l);
    long double ls=l+(r-l)/3, rs=r-(r-l)/3;
    if (S(ls)<S(rs)) {
        return tris(l, rs);
    } else {
        return tris(ls, r);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i];
        cout << fixed << setprecision(5) << tris(0, 300) << "\n";
    }
}
