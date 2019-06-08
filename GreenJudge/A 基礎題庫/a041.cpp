#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int ice=N;
        while (N>=5) {
            ice += N/5;
            N = N/5 + N%5;
        }
        cout << ice << endl;
    }
}
