#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        cout << (N*2-5)/10*10 + (N+3)%10 << endl;
    }
}
