#include <bits/stdc++.h>
using namespace std;

int a[55];

int main() {
    int n;
    cin >> n;
    int ans=0;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) {
        int* m=min_element(a+i, a+n);
        ans+=m-(a+i);
        for (int* j=m; j-1>=a+i; j--) swap(*j, *(j-1));
    }
    cout << ans << "\n";
}
