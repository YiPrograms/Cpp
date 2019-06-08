#include <bits/stdc++.h>
using namespace std;

long long a[200005];

int main() {
    int n;
    cin >> n;
    long long now=0, last=0;
    for (int i=0; i<n/2; i++) {
        long long b;
        cin >> b;
        if (i==0) last=b;
        if (b-now>last) {
            now=b-last;
        } else {
            last=b-now;
        }
        a[i]=now;
        a[n-i-1]=last;
    }
    for (int i=0; i<n; i++) cout << a[i] << " ";
    cout << "\n";
}
