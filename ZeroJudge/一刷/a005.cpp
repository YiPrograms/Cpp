#include <iostream>

using namespace std;

int main() {
	int a,b,c,d;
	cin.ignore(1);
	while (cin >> a >> b >> c >> d) {
		if (b-a == c-b) {
			int del=b-a;
			cout << a << " " << b << " " << c << " " << d << " " << d+del << endl;
		} else {
			int r=b/a;
			cout << a << " " << b << " " << c << " " << d << " " << d*r << endl;
		}
	}
} 
