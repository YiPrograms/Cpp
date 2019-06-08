#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans=0;
    multiset<int> s;
    while (n--) {
        int k;
        cin >> k;
        while (k--) {
            int ki;
            cin >> ki;
            s.insert(ki);
        }
        ans+=(*s.rbegin())-(*s.begin());
        s.erase(next(s.rbegin()).base());
        s.erase(s.begin());
    }
    cout << ans <<"\n";
}

