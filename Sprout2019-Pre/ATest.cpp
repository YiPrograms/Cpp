#include <bits/stdc++.h>
using namespace std;

bool a[100005];

int main() {
    int n;
    cin >> n;
        int si=(int)sqrt(n);
        for (int j=1; j<=si; j++) {
            if (n%j==0) {
                cout << j << " " << n/j << "\n";
            }
        }
    }

