#include <bits/stdc++.h>
using namespace std;

int k, a[13], ans[6];

void perm(int now, int last) {
    if (now==6) {
        for (int i=0; i<6; i++) {
            if (i!=0) cout << " ";
            cout << ans[i];
        }
        cout << "\n";
        return;
    }
    for (int i=last+1; i<k; i++) {
        ans[now]=a[i];
        perm(now+1, i);
    }
}

int main() {
    bool first=true;
    while (cin >> k) {
        if (k==0) break;
        if (!first) cout << "\n";
        first=false;
        for (int i=0; i<k; i++) cin >> a[i];
        perm(0, -1);
    }
}
