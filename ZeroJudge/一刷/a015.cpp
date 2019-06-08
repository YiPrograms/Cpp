#include <iostream>

using namespace std;

int main()
{
	int row, col;
	while (cin >> row >> col)
    {
        int A[col][row];
        for (int y=0; y<row; y++)
        {
            for (int x=0; x<col; x++)
            {
                cin >> A[x][y];
            }
        }

        for (int x=0; x<col; x++)
        {
            for (int y=0; y<row; y++)
            {
                cout << A[x][y] << " ";
            }
            cout << endl;
        }
    }
}
