#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans=0;
        bool dir=true; // true=climb, false=fall
        int last;
        cin >> last;
        for (int i=1; i<n; i++) {
            int ai;
            cin >> ai;
            if (dir) {
                if (ai<last) {
                    ans++;
                    dir=false;
                }
            } else {
                if (ai>last) {
                    ans++;
                    dir=true;
                }
            }
            if (i==n-1 && dir) ans++; 
            last=ai;
        }
        cout << ans << "\n";
    }
}
