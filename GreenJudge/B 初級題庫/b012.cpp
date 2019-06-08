#include <iostream>

using namespace std;

const char rc[] = {'I','V','X','L','C','D','M'};
const int rn[] = {  1,  5, 10, 50, 100,500,1000};
int rtoi(char r);

int main() {
    string r;
    while (cin >> r) {
        int sum=0;
        for (int i=0; i<r.length(); i++) {
            if (i<r.length()-1 && rtoi(r[i])<rtoi(r[i+1])) {
                sum += rtoi(r[i+1]) - rtoi(r[i]);
                i++;
            } else {
                sum += rtoi(r[i]);
            }
        }
        cout << sum << endl;
    }
}

int rtoi(char r) {
    for (int i=0; i<7; i++) {
        if (r==rc[i]) {
            return rn[i];
            break;
        }
    }
}
