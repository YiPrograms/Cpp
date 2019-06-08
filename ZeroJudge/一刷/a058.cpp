#include <iostream>

using namespace std;

int main()
{
	int ncount;
	while (cin >> ncount)
    {
        int is0=0, is1=0, is2=0;
        for (int i=0; i<ncount ;i++)
        {
            int num;
            cin >> num;
            switch (num % 3)
            {
            case 0:
                is0++;
                break;
            case 1:
                is1++;
                break;
            case 2:
                is2++;
                break;
            }
        }
        cout << is0 << " " << is1 << " " << is2 << endl;
    }
}
