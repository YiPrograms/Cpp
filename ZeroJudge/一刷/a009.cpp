#include <iostream>
using namespace std;
int main()
{
    string text;
    while (getline(cin, text))
    {
    	string result;
    	for (int i = 0; i < text.length(); i++)
        {
        char x = text.at(i);
        x -= 7;
        result += (char) x;
        };
        cout << result << endl;
	};
}
