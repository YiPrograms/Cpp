#include <iostream>

using namespace std;

int main() {
	string num;
	while (cin >> num) {
		string res="";
		bool stillzero = true;
		for (int i=0; i<num.length(); i++) {
			if (!(num[num.length()-i-1] == '0' && stillzero)) {
				res += num[num.length()-i-1];
				stillzero=false;
			}
		}
		if (res.length() == 0) res += '0';
		cout << res << endl;
	}
}
