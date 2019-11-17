#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mx=50000, Mx=-50000, my=50000, My=-50000;
    while (n--) {
        int x, y;
        cin >> x >> y;
        mx=min(mx, x);
        Mx=max(Mx, x);
        my=min(my, y);
        My=max(My, y);
    }
    int w=abs(mx-Mx), h=abs(my-My);
    cout << w*2+h*2 << "\n";
}
