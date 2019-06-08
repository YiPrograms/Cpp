#include <bits/stdc++.h>
using namespace std;
map<string, int> seaelem = {{"beorc", 0}, {"feoh", 1}, {"ur", 2}, {"purisaz", 3}, {"teiwaz", 4}};

void calc(string s) {
    int ans=0;
    stringstream ss(s);
    bool blank=true;
    string out;
    while (ss >> out) {
        blank=false;
        ans = ans*5 + seaelem[out];
    }
    if (blank) cout << "Manatee space\n";
    else cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string sea;
    while (getline(cin, sea, ';')) {
        calc(sea);
    }
    string others, tmp;
    while (cin >> tmp) others += " " + tmp;
    if (others.length()!=0) calc(others);
}
