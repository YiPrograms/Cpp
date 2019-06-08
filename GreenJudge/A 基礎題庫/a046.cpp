#include <iostream>

using namespace std;

int main() {
    int W,H;
    while (cin >> W >> H) {
        while (H--) {
            int i=W;
            while (i--) cout << "#";
            cout << endl;
        }
    }
}
