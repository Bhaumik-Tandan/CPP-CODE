#include <iostream>
using namespace std;
class date
{

public:
    int Day, Month, Year;
    date()
    {
        ;
    }
    date(int dc, int mc, int yc)
    {
        Day = dc;
        Month = mc;
        Year = yc;
    }
    date(const date &a)
    {
        Day = a.Day;
        Month = a.Month;
        Year = a.Year;
    }
    bool operator<=(date const &a)
    {
        if (a.Year < Year)
            return 0;
        if (a.Month < Month)
            return 0;
        if (a.Day < Day)
            return 0;
        return 1;
    }
    bool operator>=(date const &a)
    {
        if (a.Year > Year)
            return 0;
        if (a.Month > Month)
            return 0;
        if (a.Day > Day)
            return 0;
        return 1;
    }
    bool operator==(date const &a)
    {
        if (a.Year == Year && a.Month == Month && a.Day == Day)
            return 1;
        return 0;
    }
    void operator++(int)
    {
        Day++;
        if (Day > 28)
        {
            if (Month == 2)
            {
                if (!((Year % 100 != 0 && Year % 4 == 0) || (Year % 400 == 0)))
                {
                    Month++;
                    Day = 1;
                }
            }
        }
        else if (Day == 29)
        {
            if (Month == 2)
            {
                Month++;
                Day = 1;
            }
        }
        else if (Day == 30)
            if (Month == 4 && Month == 6 && Month == 9 && Month == 9)
            {
                Month++;
                Day = 1;
            }
            else if (Day == 31)
            {
                Month++;
                Day = 1;
            }
        if (Month > 12)
        {
            Month = 1;
            Year++;
        }
    }
    void operator--(int)
    {
        Day--;
        if (Day == 0)
        {
            Month--;
            if (Month == 2)
            {
                if (!((Year % 100 != 0 && Year % 4 == 0) || (Year % 400 == 0)))
                {
                    Day = 28;
                }
                else
                    Day = 29;
            }
            else if (Month == 1 && Month == 3 && Month == 5 && Month == 7 && Month == 8 && Month == 10 && Month == 12)
            {

                Day = 31;
            }
            else
            {
                Month = 12;
                Year--;
            }
        }
    }
};
int main()
{
    date d1(02, 06, 1983), d2(01, 12, 2019), d3(31, 12, 2005);
    date d4, d5, d6;
    d4 = d2;
    d5 = d3;
    d6 = d1;
    if (d1 <= d3)
    {
        cout << "First date is lessthan or equal to Third date"
             << "\n";
    }
    else
    {
        cout << "First date is NOT lessthan or equal to Third date"
             << "\n";
    }
    if (d4 >= d2)
    {
        cout << "Fourth date is greaterthan or equal to Second date"
             << "\n";
    }
    else
    {
        cout << "Fourth date is NOT greaterthan or equal to Second date"
             << "\n";
    }
    if (d5 == d6)
    {
        cout << "Five and Six dates are equal"
             << "\n";
    }
    else
    {
        cout << "Five and Six dates are NOT equal"
             << "\n";
    }
    cout << "The d3 date Initially:" << d3.Day << d3.Month << d3.Year;
    d3++; //Increment to next Day date, if required it may adjust month and year
    cout << "The d3 date After Increment:" << d3.Day << d3.Month << d3.Year;
    cout << "The d2 date Initially:" << d3.Day << d3.Month << d3.Year;
    d2--; // decrement to previous Day date, if required it may adjust month and year
    cout << "The d2 date After decrement:" << d2.Day << d2.Month << d2.Year;
    return 0;
}