#include <iostream>

using namespace std;

int main() {
	int x;
	while (cin >> x) {
		string opp="", res="";
		while (x > 0) {
			opp += (x%2 + '0');
			x /= 2;
		}
		for (int i=0; i<opp.length(); i++) {
			res += opp[opp.length()-i-1];
		}
		cout << res << endl;
	}
}
