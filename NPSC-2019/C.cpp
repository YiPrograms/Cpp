#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    for (long long n=1; n<=1e15; n++) {
        long long sum = 0;
        for (int i=1; i<=n; i++) {
            if (n%i==0) sum+=i;
        }
        if (k*n==sum) {
            cout << n << "\n";
            break;
        }
    }
}
