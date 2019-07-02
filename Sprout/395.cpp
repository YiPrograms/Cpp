#include <bits/stdc++.h>
using namespace std;

const int MAXN=505;
int a[MAXN][MAXN], d[MAXN][MAXN];

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
        int c;
        cin >> c;
        a[i][j]=d[i][j]=c;
    }
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) for (int k=0; k<n; k++) {
        d[i][j]=min(d[i][j], d[i][k]+d[k][j]);
    }
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
        if (i==j) {
            cout << 0;
            if (i!=n-1) cout << " "; else cout << "\n";
            continue;
        }
        int mc=0;
        int e=2e9;
        vector<int> v;
        for (int k=0; k<n; k++) {
            if (k==j) continue;
            if (d[i][k]+a[k][j]==d[i][j]) mc++;
            else if (d[i][k]+a[k][j]==e) v.emplace_back(k);
            else if (d[i][k]+a[k][j]<e) {
                v.clear();
                v.emplace_back(k);
                e=d[i][k]+a[k][j];
            }
        }
        if (mc>1) cout << d[i][j];
        else {
            for (int k=0; k<n; k++) {
                for (int ei:v) {
                    e=min(e, )
                }
            }
        }
        if (j!=n-1) cout << " "; else cout << "\n";
    }
}
