#include <iostream>

using namespace std;

int main() {
	int year;
	while (cin >> year) {
		if ((year%4 == 0 && year%100 != 0) || year%400 == 0) {
			cout << "閏年";
		} else {
			cout << "平年";
		}
		cout << endl;
	}
}
