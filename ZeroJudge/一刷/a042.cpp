#include <iostream>

using namespace std;

int main()
{
    int circles;
	while (cin >> circles)
    {
        if (circles == 0)
        {
            cout << 0 << endl;
        } else
        {
            cout << circles * circles - circles + 2 << endl;
        }

    }
}
