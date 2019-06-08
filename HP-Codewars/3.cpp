#include <bits/stdc++.h>
using namespace std;

string sa[100];

int main() {
    int n, ini=0;
    string s, si;
    cin >> n;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> si) {
        sa[ini++]=si;
    }
    for (int k=0; k<ini; k++) {
        cout << (char)(sa[k][sa[k].length()-3]>=('a'+n)? sa[k][sa[k].length()-3]-n: sa[k][sa[k].length()-3]-n+26);
        for (int i=0; i<sa[k].length()-3; i++) cout << (char)(sa[k][i]>=('a'+n)? sa[k][i]-n: sa[k][i]-n+26);
        if (k!=ini-1) cout << " "; else cout << "\n";
    }
}

