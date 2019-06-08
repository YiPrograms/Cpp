#include <iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
    {
        long long int fn=0, gn=0;
        for (int i=1; i<=n; i++)
        {
            fn += i;
        }
        for (int i=1; i<=n; i++)
        {
            gn += i * (n-i+1);
        }
        cout << fn << " " << gn << endl;
    }
}
