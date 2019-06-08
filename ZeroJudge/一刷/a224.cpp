#include <iostream>

using namespace std;

int main()
{
	string orgtext;
	while (cin >> orgtext)
    {
        string text = "";
        for (int i=0; i<orgtext.length(); i++)
        {
            if (orgtext[i] >= 'A' && orgtext[i] <= 'Z')
            {
                text += orgtext[i] - 'A' + 'a';
            }
            else if (orgtext[i] >= 'a' && orgtext[i] <= 'z')
            {
                text += orgtext[i];
            }
        }
        int charcount[26]={};
        for (int i=0; i<text.length(); i++)
        {
            charcount[text[i] - 'a']++;
        }
        int odd=0;
        for (int i=0; i<26; i++)
        {
            if (charcount[i] % 2 != 0)
            {
                odd++;
            }
        }
        if (odd <= 1)
        {
            cout << "yes !" << endl;
        }
        else
        {
            cout << "no..." << endl;
        }
    }
}
