#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x1,y1,x2,y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        cout << fixed << setprecision(3) << sqrt(pow(x1-x2,2)+pow(y1-y2,2)) << endl;
    }
}
