#include <bits/stdc++.h>
using namespace std;

int a[int(2e5)+5];

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) a[i]%=2;
    vector<int> seg;
    int last=a[0], leng=1;
    for (int i=1; i<n; i++) {
        if (a[i]==last) leng++;
        else {
            seg.push_back(leng%2);
            last=a[i];
            leng=1;
        }
    }
    for (int i=0; i<seg.size(); i++) {

    }
    if () cout << "YES\n";
    else cout << "NO\n";
}

