#include <bits/stdc++.h>
using namespace std;

int S[55];

int main() {
    cout << fixed << setprecision(6);
    int N;
    while (cin >> N) {
        if (N==0) break;
        for (int i=0; i<N; i++) cin >> S[i];
        int cnt=0;
        for (int i=0; i<N; i++) {
            for (int j=i+1; j<N; j++) {
                if (__gcd(S[i], S[j])==1) cnt++;
            }
        }
        if (cnt) cout << sqrt((double)6/((double)cnt/(N*(N-1)/2))) << "\n";
        else cout << "No estimate for this data set.\n";
    }
}
