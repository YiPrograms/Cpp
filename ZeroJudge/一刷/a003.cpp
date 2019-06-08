#include <iostream>

using namespace std;

int main() {
	int m,d;
	while (cin >> m >> d) {
		switch ((m*2+d)%3) {
			case 0:
				cout << "普通";
				break;
			case 1:
				cout << "吉";
				break;
			case 2:
				cout << "大吉";
				break;
		}
		cout << endl;
	}
}
