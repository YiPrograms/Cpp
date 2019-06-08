#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        for (int i=0; i<N; i++) {
            for (int a=0; a<i%3; a++) cout << "-";
            for (int a=0; a<N-i%3; a++) {
                if (a%3==0) cout << "@"; else cout << "-";
            }
            cout << endl;
        }
    }
}
