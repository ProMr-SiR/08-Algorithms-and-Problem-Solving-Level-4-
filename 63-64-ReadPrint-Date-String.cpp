#include <iostream>
#include <string>
#include <vector>

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
    int Year;
    int Month;
    int Day;
};

string ReadFullDate()
{
    string FullDate;
    cout << "Please, Enter Date dd/mm/yyyy? ";
    getline(cin >> ws, FullDate);
    return FullDate;
}

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord; // define a string variable
    // use find() function to get the position of the delimiters
    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length()); /* erase() until
        positon and move to next word. */
    }
    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string.
    }
    return vString;
}

stDate StringToDate(string FullDate, string Seperator = "/")
{
    stDate Date;
    vector <string> vDate;

    vDate = SplitString(FullDate, Seperator);

    Date.Day = stoi(vDate[0]);
    Date.Month = stoi(vDate[1]);
    Date.Year = stoi(vDate[2]);

    return Date;
}

string DateToString(stDate Date)
{
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

int main()
{
    string FullDate = ReadFullDate();

    stDate Date = StringToDate(FullDate);

    cout << "\nDay:" << Date.Day;
    cout << "\nMonth:" << Date.Month;
    cout << "\nYear:" << Date.Year;

    cout << "\n\nYou Entered: " << DateToString(Date);

    system("pause>0");
    return 0;
}
