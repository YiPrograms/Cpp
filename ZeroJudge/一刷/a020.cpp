#include <iostream>

using namespace std;

int main() {
	string ids;
	while (cin >> ids) {
		int f;
		switch (ids[0]) {
			case 'A': f=10; break;
			case 'B': f=11; break;
			case 'C': f=12; break;
			case 'D': f=13; break;
			case 'E': f=14; break;
			case 'F': f=15; break;
			case 'G': f=16; break;
			case 'H': f=17; break;
			case 'I': f=34; break;
			case 'J': f=18; break;
			case 'K': f=19; break;
			case 'L': f=20; break;
			case 'M': f=21; break;
			case 'N': f=22; break;
			case 'O': f=35; break;
			case 'P': f=23; break;
			case 'Q': f=24; break;
			case 'R': f=25; break;
			case 'S': f=26; break;
			case 'T': f=27; break;
			case 'U': f=28; break;
			case 'V': f=29; break;
			case 'W': f=32; break;
			case 'X': f=30; break;
			case 'Y': f=31; break;
			case 'Z': f=33; break;
		}
		f = f / 10 + f % 10 * 9;
		for (int i=1; i<9; i++){
			f += (ids[i] - '0') * (9-i);
		}
		f += (ids[9] - '0');
		if (f%10 == 0){
			cout << "real" << endl;
		} else {
			cout << "fake" << endl;
		}
	}
}
