#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        cout << N/11*1000 + N%11*100 << endl;
    }
}
