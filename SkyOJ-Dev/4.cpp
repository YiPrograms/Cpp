#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cout << fixed << setprecision(2);
    while (T--) {
        int N;
        cin >> N;
        double total=0;
        for (int i=0; i<N; i++) {
            double d;
            cin >> d;
            bool neg = d<0;
            total += (double)((int)(abs(d)*87 + .5)) /100 * (neg?-1:1);
        }
        cout << (total<0? 0: total) << "\n";
    }
}
