#include <bits/stdc++.h>
using namespace std;

bool a[100005];

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    int cnt=0;
    for (int i=n; i>=1; i--) {
        if (a[i]) continue;
        cnt++;
        int si=(int)sqrt(i);
        for (int j=1; j<=si; j++) {
            if (i%j==0) {
                a[j]=!a[j];
                a[i/j]=!a[i/j];
            }
        }
        if (i==si*si) a[si]=!a[si];
    }
    cout << cnt << "\n";
}
