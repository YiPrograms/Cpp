#include <iostream>
using namespace std;

int main() {
    int N[3];
    while (cin >> N[0] >> N[1] >> N[2]) {
        int cheapest = N[0];
        for (int i=0; i<3; i++) {
            if (cheapest > N[i]) cheapest = N[i];
        }
        cout << cheapest << endl;
    }
}
