#include <bits/stdc++.h>
using namespace std;

const string PPAP[]={"Pen", "Pineapple", "Apple", "Pineapple pen"};

int main() {
    int n;
    cin >> n;
    int row=1, i=0, now=0;
    while (true) {
        i+=row;
        if (i>=n) {
            cout << PPAP[now] << "\n";
            break;
        }
        now++;
        if (now>=4) {
            now=0;
            row++;
        }
    }
}
