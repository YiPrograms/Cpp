#include <iostream>

using namespace std;

int main() {
    int A,B;
    while (cin >> A >> B) {
        while (A!=0) {
            if (A<B) {
                int C=A;
                A=B;
                B=C;
            }
            A = A%B;
        }
        cout << B << endl;
    }
}
