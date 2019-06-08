#include <iostream>

using namespace std;

int main() {
    string s[3];
    getline(cin,s[0]);
    getline(cin,s[1]);
    getline(cin,s[2]);
    cout << s[2] << endl << s[0] << endl << s[1];
}
