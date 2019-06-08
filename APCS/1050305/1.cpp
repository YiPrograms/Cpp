#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int s[n];
        for (int i=0; i<n; i++) cin >> s[i];
        sort(s, s+n);
        int h=-1;
        for (int i=0; i<n; i++) {
            if (h==-1 && s[i]>=60) h=i;
            cout << s[i];
            if (i==n-1) cout << "\n"; else cout << " ";
        }
        if (s[0]>=60) {
            cout << "best case\n" << s[0];
        } else if (s[n-1]<60) {
            cout << s[n-1] << "\nworst case";
        } else {
            cout << s[h-1] << "\n" << s[h];
        }
        cout << "\n";
    }
}
