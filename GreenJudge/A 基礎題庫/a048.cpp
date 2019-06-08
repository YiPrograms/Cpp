#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        for (int i=1; i<=N; i++) {
            for (int a=0; a<N-i; a++) cout << "_";
            for (int a=0; a<i*2-1; a++) cout << i;
            cout << endl;
        }
    }
}
