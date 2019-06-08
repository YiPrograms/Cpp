#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int r,c,m;
	while (cin >> r >> c >> m)
    {
        vector< vector<int> > arr;
        for (int i=0; i<r; i++)
        {
            vector<int> inner;
            for (int j=0; j<c; j++)
            {
                int input;
                cin >> input;
                inner.push_back(input);
            }
            arr.push_back(inner);
        }
        cout << "input finished" << endl;
        while (m>0)
        {
            int action;
            cin >> action;
            vector< vector<int> > tmp;
            switch (action)
            {
            case 1:
                for (int i=0; i<r; i++)
                {
                    vector<int> inner;
                    for (int j=0; j<c; j++)
                    {
                        inner.insert(inner.begin() , arr[i][j]);
                    }
                    tmp.push_back(inner);
                }
                arr = tmp;
                break;
            case 0:
                for (int j=0; j<c; j++)
                {
                    vector<int> inner;
                    for (int i=0; i<r; i++)
                    {
                        inner.insert(inner.begin() , arr[i][j]);
                    }
                    tmp.push_back(inner);
                }
                arr = tmp;
                int a=r;
                r = c;
                c = a;
            }
            m--;
        }
        cout << r << " " << c << endl;
        for (int i=0; i<r; i++)
        {
            for (int j=0; j<c; j++)
            {
                cout << arr[i][j];
                if (j != c-1) cout << " ";
            }
            cout << endl;
        }
    }
}
