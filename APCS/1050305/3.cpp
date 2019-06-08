#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;


int main() {
    int n;
    while (cin >> n) {
        pair<int, int> l[n];
        for (int i=0; i<n; i++) {
            cin >> l[i].first >> l[i].second;
        }
        sort(l, l+n);
        int len=0;
        for (int i=0; i<n; ) {
            int s=l[i].first, e=l[i].second;
            len+=e-s;
            while (++i<n && l[i].first<e) {
                if (l[i].second>e) {
                    len+=l[i].second-e;
                }
            }
        }
        cout << len << "\n";
    }
}
