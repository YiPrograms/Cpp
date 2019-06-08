#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string seq="";
        for (int i=1; i<=N; i++) {
            stringstream con;
            con << i;
            string s;
            con >> s;
            seq+=s;
        }
        int times[10];
        memset(times, 0, sizeof(times));
        for (int i=0; i<seq.length(); i++) {
            times[seq[i]-'0']++;
        }
        for (int i=0; i<=9; i++) {
            cout << times[i];
            if (i!=9) cout << " "; else cout << "\n";
        }
    }
}
