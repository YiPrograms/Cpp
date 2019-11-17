#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int r=0, g=0, b=0;
    for (int i=0; i<n; i++) {
        int k=(1<<i);
        r+=k/3;
        g+=k/3;
        b+=k/3;
        k%=3;
        if (k>=1) r++;
        if (k>=2) g++;
    }
    cout << r << " " << g << " " << b << "\n";
}
