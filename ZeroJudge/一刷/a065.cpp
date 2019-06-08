#include <iostream>

using namespace std;

int main()
{
	string input;
	while (cin >> input)
    {
        for (int i=0; i<input.length()-1; i++)
        {
            char a,b;
            a = input[i];
            b = input[i+1];
            if (a > b)
            {
                char tmp = a;
                a = b;
                b = tmp;
            }
            cout << (int)(b - a);
        }
        cout << endl;
    }
}
