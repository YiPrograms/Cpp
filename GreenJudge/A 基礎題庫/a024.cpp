#include <iostream>
using namespace std;

int main() {
    string N;
    while (cin >> N) {
        int sum=0;
        for (int i=0; i<N.length(); i++) {
            sum += (int)N[i] - '0';
        }
        cout << sum << endl;
    }
}
