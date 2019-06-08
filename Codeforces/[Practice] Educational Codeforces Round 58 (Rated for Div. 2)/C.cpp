#include <bits/stdc++.h>
using namespace std;

tuple<int,int, int> s[int(1e5)+5];
bool ans[int(1e5)+5];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            int l, r;
            cin >> l >> r;
            s[i]=make_tuple(l, r, i);
            ans[i]=false;
        }
        sort(s, s+n);
        bool ok=false;
        int r=get<1>(s[0]);
        ans[get<2>(s[0])]=true;
        for (int i=1; i<n; i++) {
            if (get<0>(s[i])>r) {
                ok=true;
                break;
            } else {
                r=max(r, get<1>(s[i]));
                ans[get<2>(s[i])]=true;
            }
        }
        if (ok) {
            for (int i=0; i<n; i++) cout << (ans[i]? 1: 2) << " ";
            cout << "\n";
        } else cout << -1 << "\n";
    }
}
