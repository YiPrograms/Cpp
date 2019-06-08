#include <iostream>

using namespace std;

int main() {
	int a,b;
	while (cin >> a >> b) {
	 	int last=1;
	 	int to;
	 	if (a > b) {
			to = b;
		} else {
			to = a;
		}
		for (int i=2; i<=to; i++) {
			if (a%i == 0 && b%i == 0) {
				last = i;
			}
		}
		cout << last << endl;
	}
}
