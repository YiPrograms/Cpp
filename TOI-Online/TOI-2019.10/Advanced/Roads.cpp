#include <bits/stdc++.h>
using namespace std;

const int M = int(1e9)+7;

int fpow(int a, int b) {
    if (b==0) return 1;
    int tmp=fpow(a, b/2);
    if (b&1) return (tmp*1LL*tmp*a)%M;
    return (tmp*1LL*tmp)%M;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l;
        cin >> l;
        cout << fpow(2, l-1) << "\n";
    }
}
