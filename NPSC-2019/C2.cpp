#include <bits/stdc++.h>
using namespace std;

int main() {
    int k=5, l;
    cin >> l;
    for (long long n=1e15/8*l; n<=1e15; n++) {
        long long sum = 0;
        int sqrtn = sqrt(n);
        for (int i=1; i<=sqrtn; i++) {
            if (n%i==0) {
                sum+=i;
                if (i!=n/i) sum+=n/i;
            }
        }
        if (k*n==sum) {
            cout << n << "\n";
            break;
        }
    }
}
