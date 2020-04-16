#include <bits/stdc++.h>
using namespace std;

int a[200005];
stack<int> s;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    s.emplace(a[0]);
    bool ok=true;
    if (a[0]<0) ok=false;
    else for (int i=1; i<n; i++) {
        if (a[i]<0) {
            if (!s.empty() && -s.top()==a[i]) s.pop();
            else {
                ok=false;
                break;
            }
        } else s.emplace(a[i]);
    }
    if (ok && s.empty()) cout << "weed\n";
    else cout << "lose light light\n";
}
