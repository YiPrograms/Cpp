#include <iostream>
using namespace std;

int main() {
    int N,R;
    while (cin >> N >> R) {
        int P=N;
        for (int i=1; i<R; i++) {
            P *= N-i;
        }
        cout << P << endl;
    }
}
