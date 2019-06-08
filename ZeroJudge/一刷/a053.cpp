#include <iostream>

using namespace std;

int main()
{
	int ac;
	while (cin >> ac)
    {
        int score = 0;
        if (ac <= 10)
        {
            score = ac * 6;
        }
        else if (ac <= 20)
        {
            score = 60 + (ac-10) * 2;
        }
        else if (ac <= 40)
        {
            score = 80 + (ac-20);
        }
        else
        {
            score = 100;
        }
        cout << score << endl;
    }
}
