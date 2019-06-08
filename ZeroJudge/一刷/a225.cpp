#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    if (a % 10 == b % 10)
    {
        return a > b;
    }
    else
    {
        return a%10 < b%10;
    }
}

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
        sort(nums, nums+ncount, compare);
        for (int i=0; i<ncount; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
}
