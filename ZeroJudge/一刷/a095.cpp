#include <iostream>

using namespace std;

int main()
{
	int n,m;
	while (cin >> n >> m)
    {
        if (n == m)
        {
            cout << n << endl;
        }
        else
        {
            cout << m+1 << endl;
        }
    }
}
