#include <iostream>

using namespace std;

int main()
{
    int areas;
	while (cin >> areas)
    {
        if (areas == 0)
        {
            cout << 0 << endl;
        } else
        {
            cout << (areas * areas * areas + 5 * areas + 6) / 6 << endl;
        }

    }
}
