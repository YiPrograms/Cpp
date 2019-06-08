#include <iostream>

using namespace std;

int main()
{
	int casecount;
	cin >> casecount;
	for (int c=1; c<=casecount; c++)
    {
        int a,b;
        cin >> a >> b;
        int sum=0;
        for (int x=a; x<=b; x++)
        {
            for (int i=1; i<32; i++)
            {
                if (x == i * i)
                {
                    sum += x;
                }
            }
        }
        cout << "Case " << c << ": " << sum << endl;
    }
}
