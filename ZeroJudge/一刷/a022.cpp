#include <iostream>

using namespace std;

int main() {
	string text;
	while (cin >> text) {
		string a,bx,b="";
		a = text.substr(0, text.length()/2);
		bx = text.substr(text.length()/2, text.length()-1);
		int i=0;
		for ( ; i<a.length(); i++) {
			b += bx[bx.length()-i-1];
		}
		if (a == b) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
}
