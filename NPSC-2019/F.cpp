#include <bits/stdc++.h>
using namespace std;

int l[205], r[205], m[205];
bool solv[205];
int solc;

int main() {
    int n, k;
    cin >> n >> k;
    fill(r, r+k, n);
    while (solc<k) {
        for (int i=0; i<k; i++) {
            if (solv[i]) continue;
            m[i] = (l[i]+r[i])>>1;
        }
    }
}
