#include <bits/stdc++.h>
using namespace std;

unsigned int a[50000];

int main() {
    a[1]=1;
    for (unsigned int i=2; i<50000; i++) {
        a[i]=(unsigned int)a[i-1]+(unsigned int)4*i-(unsigned int)3;
    }
    unsigned int k;
    while (cin >> k) {
        auto lb=lower_bound(a, a+50000, k);
        unsigned int l=*(lb-1), r=*lb;
        cout << l << " " << r << "\n";
        if (r-k<k-l) cout << r << "\n";
        else cout << l << "\n";
    }
}

