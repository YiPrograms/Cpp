#include <iostream>
using namespace std;

int main() {
    string N;
    while (cin >> N) {
        string res="";
        for (int i=0; i<N.length(); i++) {
            res += N[N.length()-i-1];
        }
        string ans="";
        bool iszero = true;
        for (int i=0; i<res.length(); i++) {
            if (!(iszero && res[i]=='0')) {
               ans += res[i];
            }
        }
        cout << ans << endl;
    }
}
