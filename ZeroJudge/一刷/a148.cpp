#include <iostream>

using namespace std;

int main()
{
	float ncount;
	while (cin >> ncount)
    {
        float sum = 0;
        for (int i=0; i<ncount; i++)
        {
            float in;
            cin >> in;
            sum += in;
        }
        if (sum / ncount > 59)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}
