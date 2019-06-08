#include <iostream>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		bool add = false;
		for (int x = 2; x <= num; x++)
		{
			int times = 0;
			while (num % x == 0)
			{
				times++;
				num /= x;
			}
			
			if (times >= 1)
			{
				if (add)
				{
					cout << " * ";
				} else {
					add = true;
				}
				cout << x;
				if (times >=2)
				{
					cout << "^" << times;
				}
				
			}
		}
		cout << endl;
	}

} 
