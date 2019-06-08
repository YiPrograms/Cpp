#include <iostream>
using namespace std;
const int MAX=100000;

int main() {
    int T;
    while (cin >> T) {
        int o, s[MAX], top=-1;
        while (cin >> o) {
            if (o==1) {
                int n;
                cin >> n;
                s[++top]=n;
            } else {
                if (top!=-1) {
                    cout << s[top] << "\n";
                    top--;
                } else {
                    cout << "empty!\n";
                }
            }
        }

    }
}
