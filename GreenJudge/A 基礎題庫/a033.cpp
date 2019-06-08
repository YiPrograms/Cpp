#include <iostream>
using namespace std;

int main() {
    string N;
    while (cin >> N) {
        string res="";
        for (int i=0; i<4; i++) {
            if (i<N.length()) {
                res = N[N.length()-i-1] + res;
            } else {
                res = "_" + res;
            }
        }
        cout << "|____" << res << "|" << endl;
    }
}
