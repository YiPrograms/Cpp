#include <iostream>

using namespace std;

int main()
{
	int ncount;
	cin >> ncount;
	while (ncount--)
    {
        long long int a,b,c;
        long long int out;
        cin >> a >> b >> c;
        switch (a)
        {
        case 1:
            out = b+c;
            break;
        case 2:
            out = b-c;
            break;
        case 3:
            out = b*c;
            break;
        case 4:
            out = b/c;
        }
        cout << out << endl;
    }
}
