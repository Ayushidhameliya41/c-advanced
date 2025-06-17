#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    int startYear, endYear;

    cout << "Enter start year: ";
    cin >> startYear;
    cout << "Enter end year: ";
    cin >> endYear;

    int leapYears[endYear - startYear + 1];
    int count = 0;

    for (int year = startYear; year <= endYear; year++)
    {
        if (isLeapYear(year))
        {
            leapYears[count] = year;
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No leap years found." << endl;
    }
    else
    {
        cout << "Leap years between are:-\n";
        for (int i = 0; i < count; i++)
        {
            cout << leapYears[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
