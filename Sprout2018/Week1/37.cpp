#include <iostream>
using namespace std;
const int MAX=100000;

int main() {
    int T;
    while (cin >> T) {
        int o, q[MAX], r=-1, f=-1;
        while (cin >> o) {
            if (o==1) {
                int n;
                cin >> n;
                q[++r]=n;
            } else {
                if (r!=f) {
                    cout << q[++f] << "\n";
                } else {
                    cout << "empty!\n";
                }
            }
        }

    }
}
