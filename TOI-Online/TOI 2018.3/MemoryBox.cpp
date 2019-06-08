#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int B;
    cin >> B;
    while (B--) {
        int p;
        cin >> p;
        int n, m=0, sigma=0;
        for (n=1; ; n+=2) {
            sigma+=n+n-1;
            if (sigma>p) break;
        }
        m=sigma-p;
        if (m>n) {
            m=sigma-p-n;
            n--;
        }
        cout << m << " " << n << "\n";
    }
}
