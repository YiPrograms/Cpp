#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sumx=0, sumy=0;
    for (int i=0; i<n*2; i++) {
        int x, y;
        cin >> x >> y;
        sumx+=x;
        sumy+=y;
    }
    cout << sumx/n << " " << sumy/n << "\n";
}
