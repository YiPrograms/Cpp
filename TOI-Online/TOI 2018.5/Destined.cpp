#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector<bool> p(n+1, true);
    int now=0;
    for (int O=0; O<n-1; O++) {
        for (int i=0; i<k; i++) {
            now++;
            if (now==n+1) now=1;
            if (!p[now]) i--;
        }
        p[now]=false;
    }
    for (int i=1; i<=n; i++) if (p[i]) cout << i;
}
