#include <bits/stdc++.h>
using namespace std;

int a[105];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while (getline(cin, s)) {
        stringstream ss(s);
        int ai, id=0;
        while (ss >> ai) {
            a[id]=ai;
            id++;
        }
        for (int i=id-1; i>=0; i--) {
            cout << a[i];
            if (i==0) cout << "\n"; else cout << " ";
        }
    }
}
