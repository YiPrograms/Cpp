#include <bits/stdc++.h>
using namespace std;

int a[int(1e6)+5];
bool inque[1005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int k=1;
    while (cin >> n) {
        cout << "Line #" << k++ << "\n";
        memset(a, 0, sizeof(a));
        memset(inque, 0, sizeof(inque));
        queue<int> q, sq[1005];
        for (int i=1; i<=n; i++) {
            int ki;
            cin >> ki;
            while (ki--) {
                int x;
                cin >> x;
                a[x]=i;
            }
        }
        string s;
        while (cin >> s) {
            if (s=="STOP") break;
            else if (s=="ENQUEUE") {
                int x;
                cin >> x;
                if (a[x]==0) {
                    q.emplace(n+x);
                } else {
                    if (!inque[a[x]]) q.emplace(a[x]), inque[a[x]]=true;
                    sq[a[x]].emplace(x);
                }
            } else {
                if (q.front()>n) cout << q.front()-n << "\n", q.pop();
                else {
                    cout << sq[q.front()].front() << "\n";
                    sq[q.front()].pop();
                    if (sq[q.front()].empty()) inque[q.front()]=false, q.pop();
                }
            }
        }
    }
}
