#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        for (int i=1; i<=N; i++) {
            for (int j=1; j<=N; j++) {
                cout << j << "x" << i << "=" << setw(2) << i*j;
                if (j==N) cout << endl; else cout << "  ";
            }
        }
    }
}
