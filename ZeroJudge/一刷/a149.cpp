#include <iostream>

using namespace std;

int main()
{
	string num;
	int ncount;
	cin >> ncount;
	while (ncount--)
    {
        cin >> num;
        int res = num[0] - '0';
        for (int i=1; i<num.length(); i++)
        {
            res *= num[i] - '0';
        }
        cout <<res << endl;
    }
}
