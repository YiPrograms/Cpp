#include <bits/stdc++.h>
using namespace std;

void print(pair<int ,int> p) {
    cout << p.first << " " << p.second << "\n";
}

int main() {
    pair<int ,int> p[4];
    for (int i=0; i<4; i++) {
        int xi, yi;
        cin >> xi >> yi;
        p[i].first=xi;
        p[i].second=yi;
    }
    sort(p, p+4);
    if (p[0].first==p[1].first && p[2].first==p[3].first && p[0].second==p[2].second && p[1].second==p[3].second && p[1].second-p[0].second==p[2].first-p[0].first) {
        cout << "True\n";
        print(p[1]);
        print(p[0]);
        print(p[2]);
        print(p[3]);
    } else cout << "False\n";
}

