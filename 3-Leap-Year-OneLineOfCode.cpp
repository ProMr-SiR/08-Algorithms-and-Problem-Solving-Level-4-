#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

short ReadYear()
{
	short Year;
	cout << "Enter The Year ? ";
	cin >> Year;
	return Year;
}

bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 ==0);
}

int main()
{
	int Year = ReadYear();

	if (isLeapYear(Year))
		cout << "Yes, It is Leap " << Year << "." << endl;
	else 
		cout << "No, It is Not Leap Year " << Year << "." << endl;

	system("pause>0");
	return 0;
}
