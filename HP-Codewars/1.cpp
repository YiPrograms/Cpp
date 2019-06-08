#include <bits/stdc++.h>
using namespace std;

int a[25];

int main() {
    int n,m, s=0;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    cin >> m;
    while (m--) {
        int mi;
        cin >> mi;
        s+=mi;
    }
    s%=n;
    if (s<0) s+=n;
    for (int i=n-s, l=0; l<n; l++, i++) {
        if (i>=n) i-=n;
        cout << a[i] ;
        if (l<n-1) cout << " " ; else cout << "\n";
    }
}




