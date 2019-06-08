#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int items=1;
        while (N!=1) {
            if (N%2) {
                N=N*3+1;
            } else {
                N/=2;
            }
            items++;
        }
        cout << items << endl;
    }
}
