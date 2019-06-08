#include <iostream>

using namespace std;

int main() {
    string s;
    while (cin >> s) {
        int n=3;
        int sum=0;
        while (n--) {
            if (n!=2) cin >> s;
            int num=0;
            for (int i=0; i<s.length(); i++) {
                if (s[i]>='0' && s[i]<='9') {
                    num = num*10 + s[i]-'0';
                }
            }
            sum += num;
        }
        cout << sum << endl;
    }
}
