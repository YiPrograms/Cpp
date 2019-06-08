#include <iostream>
#include <sstream>
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
using namespace std;

int main() {
	string abc;
	while (getline(cin, abc)) {
		istringstream word(abc);
		string words[100];
		for (int i=0; word >> words[i]; i++) {
		}
		cout << ARRAY_SIZE(words) << endl;
	}
}
