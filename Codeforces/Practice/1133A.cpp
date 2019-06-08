#include <bits/stdc++.h>
using namespace std;

int main() {
    int sh, sm, eh, em;
    cin >> sh;
    cin.get();
    cin >> sm >> eh;
    cin.get();
    cin >> em;
    int mins=60*eh+em-60*sh-sm;
    sm+=mins/2;
    while (sm>=60) sh++, sm-=60;
    if (sh<10) cout << 0;
    cout << sh << ":";
    if (sm<10) cout << 0;
    cout << sm << "\n";
}
