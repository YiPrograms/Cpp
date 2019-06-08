#include <iostream>

using namespace std;

int main() {
    string s;
    while (cin >> s) {
        bool isoppo=true;
        for (int i=0; i<s.length()/2+1; i++) {
            if (!(s[i]==s[s.length()-i-1])) {
                isoppo=false;
                break;
            }
        }
        if (isoppo) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}
