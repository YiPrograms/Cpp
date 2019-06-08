#include<iostream>

using namespace std;

int main()
{
    int a, b;
    while ( cin >> a >> b )
    {
        int ncount = 0;
        for ( int i = a; i <= b; i++ )
        {
            bool is = true;
            for ( int j = 2; j * j <= i; j++ )
            {
                if ( i % j == 0 )
                {
                    is=false;
                    break;
                }
            }
            if ( is && i != 1 ) ncount++;
        }
        cout << ncount << endl;
    }
}
