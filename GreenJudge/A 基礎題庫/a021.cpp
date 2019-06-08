#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        while (N%2==0) {
            N /= 2;
        }
        cout << N << endl;
    }
}
