#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int ncount;
	while (cin >> ncount)
    {
        int scores[ncount];
        for (int i=0; i<ncount; i++)
        {
            cin >> scores[i];
        }
        sort(scores, scores+ncount);
        int worst = -1, best = -1;
        for (int i=0; i<ncount; i++)
        {
            cout << scores[i];
            if (i != ncount-1) cout << " ";
            if (scores[i] < 60) worst = scores[i];
            if (scores[i] >= 60 && best == -1) best = scores[i];
        }
        cout << endl;
        if (worst == -1) cout << "best case" <<endl;
        else cout << worst << endl;
        if (best == -1) cout << "worst case" <<endl;
        else cout << best << endl;
    }
}
