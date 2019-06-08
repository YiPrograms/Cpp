#include <iostream>
using namespace std;

int main() {
    int N,M;
    while (cin >> N >> M) {
        int mins=0;
        while (N<M) {
            N *= 3;
            mins++;
        }
        cout << mins << endl;
    }
}
