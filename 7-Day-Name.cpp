#include <iostream>
using namespace std;


short ReadYear()
{
	short Year;
	cout << "Please enter a year? ";
	cin >> Year;
	return Year;
}

short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month? ";
	cin >> Month;
	return Month;
}

short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}

short DayOfWeek(short Year, short Month, short Day)
{
	int a = ((14 - Month) / 12);
	Year = Year - a;
	Month = Month + (12 * a) - 2;

	return ((Day + Year + (Year / 4) - (Year / 100) + (Year / 400) +((31 * Month) / 12)) % 7);
}

string DayName(short ShortDayNameOfWeek)
{
	string DayName[] = { "Sun","Mon","Tus","Wend","Thur","Fri","Sat" };
	return DayName[ShortDayNameOfWeek];
}

int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();
	short Day = ReadDay();

	cout << "\nDate          : " << Day << "/" << Month << "/" << Year;
	cout << "\nDay Order     : " << DayOfWeek(Year, Month, Day);
	cout << "\nDay Name      : " << DayName(DayOfWeek(Year, Month, Day));


	system("pause>0");
	return 0;
}
