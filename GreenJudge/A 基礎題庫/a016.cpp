#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if ((N%4==0 && N%100!=0) || N%400==0) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}
