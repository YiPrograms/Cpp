#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string intstr(int intnumber)
{
    bool isneg = false;
    if (intnumber < 0)
    {
        intnumber *= -1;
        isneg = true;
    }
    string res = "";
    while (intnumber > 0)
    {
        res = (char)(intnumber % 10 + '0') + res;
        intnumber /= 10;
    }
    if (isneg) res = '-' + res;
    return res;
}

int main() {
	int a,b;
	while (cin >> a >> b) {
		bool nothing = true;
		for (int i=a; i<=b ; i++) {
			int sum=0;
			string si = intstr(i);
			for (int x=0; x<si.length(); x++) {
				sum += pow((si[x] - '0'), si.length());
			}
			if (sum == i) {
				cout << i << " ";
				nothing = false;
			}
		}
		if (nothing) {
			cout << "none";
		}
		cout << endl;
	}
}
