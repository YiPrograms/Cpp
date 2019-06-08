#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, e;
    cin >> s >> e;
    int d=e-s, sd=(int)sqrt(d);
    int add=0;
    if (d!=sd*sd) {
        int diff=d-sd*sd;
        add=diff/sd;
        if (diff%sd!=0) add++;
    }
    cout << (s==e? 0: sd*2-1+add) << "\n";
}

