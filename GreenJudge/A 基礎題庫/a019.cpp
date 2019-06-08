#include <iostream>
using namespace std;

int main() {
    int a,b;
    while (cin >> a >> b) {
        int money=0;
        if (a==b) money=50;
        if (a%2) money=100;
        if (b==2 || b==5 || b==8) money=200;
        cout << money << endl;
    }
}
