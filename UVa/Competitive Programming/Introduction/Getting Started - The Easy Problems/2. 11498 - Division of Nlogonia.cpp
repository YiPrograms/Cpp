#include <iostream>
using namespace std;

int main() {
    int K;
    while (cin >> K) {
        if (K==0) break;
        int N, M;
        cin >> N >> M;
        while (K--) {
            int X, Y;
            cin >> X >> Y;
            if (X==N || Y==M) cout << "divisa";
            else {
                if (X>N) {
                    if (Y>M) {
                        cout << "NE";
                    } else {
                        cout << "SE";
                    }
                } else {
                    if (Y>M) {
                        cout << "NO";
                    } else {
                        cout << "SO";
                    }
                }
            }
            cout << "\n";
        }
    }
}
