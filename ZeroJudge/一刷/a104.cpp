#include <iostream>

using namespace std;

int main()
{
	int ncount;
	while (cin >> ncount)
    {
        int nums[ncount];
        for (int i=0; i<ncount; i++)
        {
            cin >> nums[i];
        }
        for (int times=0; times<ncount; times++)
        {
            for(int i=0; i<ncount-1-times; i++)
            {
                if (nums[i] > nums[i+1])
                {
                    int tmp = nums[i+1];
                    nums[i+1] = nums[i];
                    nums[i] = tmp;
                }
            }
        }

        for (int x=0; x<ncount; x++)
        {
            cout << nums[x] << " ";
        }
        cout << endl;
    }
}
