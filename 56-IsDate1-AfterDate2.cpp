#pragma warning(disable : 4996)

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}

short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

struct stDate
{
    short Year;
    short Month;
    short Day;
};

stDate ReadFullDate()
{
    stDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? 
        true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? 
        true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) ? ((Date1.Month ==
        Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
        : false;
}

bool isDate1AfterDate2(stDate Date1, stDate Date2)
{
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

int main()
{
    cout << "\nEnter Date1: ";
    stDate Date1 = ReadFullDate();

    cout << "\nnEnter Date2: ";
    stDate Date2 = ReadFullDate();

    if (isDate1AfterDate2(Date1, Date2))
        cout << "\nYes,Date1 is  After Date2 " << endl;
    else
        cout << "\nNo,Date1 is NOT Date1 After Date2 " << endl;


    system("pause>0");
    return 0;
}
