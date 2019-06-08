using namespace std;

int strint(string strnumber) // string --> int
{
    int res = 0;
    bool isneg = false;
    if(strnumber[0] == '-')
    {
        strnumber.erase(strnumber.begin());
        isneg = true;
    }
    for (int i=0; i<strnumber.length(); i++)
    {
        res += strnumber[i] - '0';
        res *= 10;
    }
    res /= 10;
    if (isneg) res *= -1;
    return res;
}

string intstr(int intnumber) // int --> string
{
    bool isneg = false;
    if (intnumber < 0)
    {
        intnumber *= -1;
        isneg = true;
    }
    string res = "";
    while (intnumber > 0)
    {
        res = (char)(intnumber % 10 + '0') + res;
        intnumber /= 10;
    }
    if (isneg) res = '-' + res;
    return res;
}
