#include <iostream>

using namespace std;

int main() {
    string s1,s2;
    while (cin >> s1 >> s2) {
        int last=0;
        bool found;
        for (int i=0; i<s1.length(); i++) {
            for (found=false; last<s2.length(); last++) {
                if (s1[i]==s2[last]) {
                    found=true;
                    last++;
                    break;
                }
            }
            if (!found) {
                cout << "NO";
                break;
            }
        }
        if (found) cout << "YES";
        cout << endl;
    }
}
