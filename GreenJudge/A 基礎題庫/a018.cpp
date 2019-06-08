#include <iostream>
using namespace std;

int main() {
    int H,M;
    while (cin >> H >> M) {
        bool ans=false;
        switch (H) {
        case 14:
            if (M>=20) ans=true;
            break;
        case 15:
            ans=true;
            break;
        case 16:
            if (M<=40) ans=true;
        }
        if (ans) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}
