#include <bits/stdc++.h>
using namespace std;

long double a[100005];

int main() {
    //cout << fixed << setprecision(10);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long double sum=0.0, Max=0.0;
        bool ok=true;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]<1e-12) ok=false;
            if (Max-a[i]<1e-12) Max=a[i];
            sum+=a[i];
        }
        if (!ok) cout << "Yes\n"; else {
            //cout << sum-Max << " " << Max << "\n";
            if (abs(sum-Max-Max)<1e-12) cout << "Yes\n";
            else if (sum-Max>Max-1e-12) cout << "No\n";
            else cout << "Yes\n";
        }
    }
}
