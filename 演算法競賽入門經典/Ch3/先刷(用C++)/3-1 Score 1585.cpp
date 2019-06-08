#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int sum=0;
        for (int i=0,now=1; i<s.length(); i++,now++) {
            if (s[i]=='O') {
                sum+=now;
            } else {
                now=0;
            }
        }
        cout << sum << "\n";
    }
}
