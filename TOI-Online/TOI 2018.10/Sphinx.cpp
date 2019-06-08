#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
    int n;
    cin >> n;
    int now=1, prefix=0;
    while (prefix<n) {
        stringstream ss;
        ss << now;
        s+=ss.str();
        prefix+=s.length();
        now++;
    }
    cout << s.at(n-(prefix-s.length())-1) << "\n";
}
