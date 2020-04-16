#include <bits/stdc++.h>
using namespace std;

int a[25], p[25], an[10];
const int M=1e9+7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        for (int i=0; i<n; i++) p[i]=1;
        for (int i=0; i<n; i++) a[i]=i+1;
        int ans=0;
        do {
            int res=0;
            for (int i=0; i<n; i++) {
                res += min(min(abs(a[i]-p[i]), abs(p[i]+n-a[i])), abs(p[i]-a[i]-n));
                res %= 10;
            }
            if (res==k) {
                ans++;
                if (ans==M) ans=0;
            }
            an[res]++;
        } while (next_permutation(a, a+n));
        cout << ans << "\n";
        for (int i=0; i<10; i++) cout << i << " " << an[i] << "\n", an[i]=0;
    }
}
