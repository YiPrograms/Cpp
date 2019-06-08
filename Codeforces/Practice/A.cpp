#include <bits/stdc++.h>
using namespace std;

int a[int(1e5)+5];
vector<int> pi;
priority_queue<pair<int, vector<int>::iterator>> pq;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    int now=1;
    for (int i=1; i<n; i++, now++) {
        if (a[i]!=a[i-1]) {
            pi.emplace_back(now);
            pq.emplace(*(pi.end()-1), pi.end()-1);
            now=0;
        }
    }
    pi.emplace_back(now);
    pq.emplace(*(pi.end()-1), pi.end()-1);
    while (!pq.empty()) {
        auto t=pq.top();
        pq.pop();
        if ((t.second!=pi.end()-1 && *(t.second+1)>=t.first) || (t.second!=pi.begin() && *(t.second-1)>=t.first)) {
            cout << 2*t.first << "\n";
            break;
        }
    }
}
