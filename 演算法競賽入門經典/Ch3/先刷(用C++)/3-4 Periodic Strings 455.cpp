#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string s;
        cin >> s;
        bool found=false;
        for (int i=1; i<=s.length()/2; i++){
            if (s.length()%i!=0) continue;
            string sub="", subs="";
            for (int j=0; j<i; j++) sub+=s[j];
            for (int j=0; j<s.length()/i; j++) subs+=sub;
            if (subs==s) {
                found=true;
                cout << i;
                break;
            }
        }
        if (!found) cout << s.length();
        cout << "\n";
        if (N!=0) cout << "\n";
    }
}
