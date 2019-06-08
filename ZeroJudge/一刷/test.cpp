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
	int a;
	while (cin >> a) {
            bool nothing;
			int sum=0;
			string si = intstr(a);
			for (int x=0; x<si.length(); x++) {
				sum += pow((si[x] - '0'), si.length());
			}
			if (sum == a) {
				cout << a << " ";
				nothing = false;
			}
		}
		if (nothing) {
			cout << "none";
		}
		cout << endl;
	}
}
