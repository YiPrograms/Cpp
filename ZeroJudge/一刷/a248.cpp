#include <iostream>

using namespace std;

int main()
{
	int a,b,N;
	while (cin >> a >> b >>N)
    {
        cout << a/b << '.';
        int last = a%b*10;
        for (int i=0; i<N; i++)
        {
            cout << last/b;
            last = last % b *10;
        }
        cout << endl;
    }
}
