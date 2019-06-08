#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int res=1;
        while (N--) {
            res = res%100 * 13;
        }
        cout << res%100/10 << endl;
    }
}
