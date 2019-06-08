#include <bits/stdc++.h>
using namespace std;

int a[105];

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    int ans=0;
    for (int i=2; i<n; i++) {
        if (a[i]==1 && a[i-1]==0 && a[i-2]==1) {
            ans++;
            a[i]=0;
        }
    }
    cout << ans <<"\n";
}
