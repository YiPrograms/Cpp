#include <bits/stdc++.h>
using namespace std;

using pii=pair<long long, int>;

void Report(int id) {
    cout << "Report " << id << "\n";
}

map<long long, int> l, r;

void solve(int N,long long K,long long A[]) {
    int n=N/2, nr=(N+1)/2;
    for (int i=0; i<(1<<nr); i++) {
        long long sl=0, sr=0;
        for (int j=0; j<n; j++) {
            if (i & (1<<j)) {
                sl+=A[j];
            }
        }
        for (int j=0; j<nr; j++) {
            if (i & (1<<j)) {
                sr+=A[j+n];
            }
        }
        l[sl]=i;
        r[sr]=i;
    }
    for (pii p:l) cout << p.first << " ";
    cout << "\n";
    for (pii p:r) cout << p.first << " ";
    cout << "\n";

    for (pii p:l) {
        auto res = r.find(K-p.first);
        if (res==r.end()) continue;
        for (int j=0; j<n; j++) {
            if (p.second & (1<<j)) Report(j+1);
        }
        for (int j=0; j<nr; j++) {
            if (res->second & (1<<j)) Report(j+n+1);

        }
        Report(-1);
        return;
    }
}

int main() {
    long long n, k, a[45];
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> a[i];
    solve(n, k, a);
}
