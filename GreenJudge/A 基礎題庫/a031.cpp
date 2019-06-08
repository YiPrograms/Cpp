#include <iostream>
using namespace std;

int main() {
    string N;
    while (cin >> N) {
        int A=0,B=0;
        bool change=false;
        int sym;
        for (int i=0; i<N.length(); i++) {
            if (N[i]>='0') {
                if (!change) {
                    A = A*10+(int)N[i]-'0';
                } else {
                    B = B*10+(int)N[i]-'0';
                }
            } else {
                sym=i;
                change=true;
            }
        }
        switch (N[sym]) {
        case '+':
            cout << A+B;
            break;
        case '-':
            cout << A-B;
            break;
        case '*':
            cout << A*B;
        }
        cout << endl;
    }
}
