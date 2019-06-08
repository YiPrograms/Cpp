#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector<int> p;
    for (int i=1; i<=n; i++) p.push_back(i);
    int now=0;
    for (int c=n; c>1; c--) {
        now=(now+k)%c-1;
        if (now==-1) now=c-1;
        p.erase(p.begin()+now);
    }
    cout << p[0];
}
