#include <bits/stdc++.h>
using namespace std;

int a[int(1e5)];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    int sum=0;
    int now=0;
    while (k--) {
        if (now>=n) {
            cout << 0 << "\n";
            continue;
        }
        while (now<n && a[now]-sum==0) now++;
        if (now>=n) {
            cout << 0 << "\n";
            continue;
        }
        cout << a[now]-sum << "\n";
        sum+=a[now]-sum;
        now++;
    }
}
