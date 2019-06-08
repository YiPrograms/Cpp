#include <iostream>

using namespace std;

int tod(string roman) {
	int res=0;
	string tworom[]={"CM","CD","XC","XL","IX","IV"};
	int twovalue[]={900,400,90,40,9,4};
	string onerom[]={"M","D","C","L","X","V","I"};
	int onevalue[]={1000,500,100,50,10,5,1};
	while (roman.length()>0) {
		string two = roman.substr(0,2);
		bool removed=false;
		for (int i=0; i<6; i++) {
			if (two == tworom[i]) {
				res += twovalue[i];
				roman.erase(0,2);
				removed=true;
			}
		}
		if (! removed) {
			string one = roman.substr(0,1);
			for (int i=0; i<7; i++) {
				if (one == onerom[i]) {
					res += onevalue[i];
					roman.erase(0,1);
				}
			}
		}
	}
	return res;
} 

string tor(int number) {
	if (number==0) {
		return "ZERO";
	} else {
		string res="";
		string rom[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
		int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
		while (number>0) {
			for (int i=0; i<13; i++){
				while (number>=value[i]) {
					res += rom[i];
					number -= value[i];
				}
			}
		}
		return res;
	}
}

int main() {
	string ra;
	string rb;
	while (cin >> ra >> rb) {
		if (ra=="#") break;
		int a = tod(ra), b = tod(rb);
		if (a>b) {
			cout << tor(a-b) << endl;
		} else {
			cout << tor(b-a) << endl;
		}
	}
} 
