#include <iostream>
using namespace std;

int main() {
    int A,B;
    while (cin >> A >> B) {
        int sum=0;
        if (A<B) {
            for (int i=A; i<=B; i++) {
            sum += i;
            cout << i;
            if (i==B) cout << "="; else cout << "+";
            }
        } else {
            for (int i=A; i>=B; i--) {
            sum += i;
            cout << i;
            if (i==B) cout << "="; else cout << "+";
            }
        }

        cout << sum << endl;
    }
}
