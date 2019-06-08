#include <iostream>
#include <cstdio>
using namespace std;

string star[] = {"capricorn","aquarius", "pisces", "aries", "taurus", "gemini", "cancer", "leo", "virgo", "libra", "scorpio", "sagittarius", "capricorn"};
int stard[] = {23,21,20,21,21,22,22,23,22,24,24,23,23};

// this follows Gregorian rules
bool isLeapYear(int year)
{
    if (year%400==0) return true;
    if (year%100==0) return false;
    return (year%4==0);
}

int main()
{
    int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int day,month,year, daysToAdvance;
    cin >> daysToAdvance >> month >> day >> year;

    for (int i=0;i<daysToAdvance;i++)
    {
        day++;
        if (day > daysPerMonth[month-1] || ( month==2 && day==29 && !isLeapYear(year) ) )
        {
            day = 1;
            month++;
            if (month==13)
            {
                month = 1;
                year++;
            }
        }
    }

    cout << month << "/" << day << "/" << year << " ";

    if (day >= stard[month]) cout << star[month]; else cout << star[month-1];
}
