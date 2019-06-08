#include <iostream>

using namespace std;

int main() {
    string s;
    while (cin >> s) {
        for (int i=0; i<s.length(); i++) {
            if (s[i]=='A') cout << 'Y';
            else if (s[i]=='B') cout << 'Z';
            else {
                char k = s[i]-2;
                cout << k;
            }

        }
        cout << endl;
    }
}
