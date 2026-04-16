#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

short ReadYear()
{
	short Year;
	cout << "Please, Enter a Year to Check? ";
	cin >> Year;
	return Year;
}

bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 ==0);
}

short DaysInAYear(short Year)
{
	return (isLeapYear(Year)) ? 366 : 365;
}

short HoursInAYear(short Year)
{
	return DaysInAYear(Year) * 24;
}

int MinutesInAYear(int Year)
{
	return HoursInAYear(Year) * 60;
}

int SecondsInAYear(int Year)
{
	return MinutesInAYear(Year) * 60;
}


int main()
{
	int Year = ReadYear();

	if (isLeapYear(Year))
		cout << "Yes, It is Leap " << Year << "." << endl;
	else 
		cout << "No, It is Not Leap Year " << Year << "." << endl;

	cout << "Number of Days       in Year [" << Year << "] is " << DaysInAYear (Year) << endl;
	cout << "Number of Hours      in Year [" << Year << "] is " << HoursInAYear(Year) << endl;
	cout << "Number of Minutes    in Year [" << Year << "] is " << MinutesInAYear(Year) << endl;
	cout << "Number of Seconds    in Year [" << Year << "] is " << SecondsInAYear(Year) << endl;

	system("pause>0");
	return 0;
}
