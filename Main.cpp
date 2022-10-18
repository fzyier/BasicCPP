#include <iostream>

using namespace std;

int LeapYear(int year) {
	return 366 - (year % 4 > 0);
}
void Date(int day1, int month1, int year1, int day2, int month2, int year2) {
	int firstDate = day1, secondDate = day2;
	const int size = 12;
	int standardDays[size] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int leapDays[size] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 0; i < month1-1; i++)
		(LeapYear(year1) == 365) ? firstDate += standardDays[i] : firstDate += leapDays[i];
	for(int i = 0; i < month2-1; i++)
		(LeapYear(year2) == 365) ? secondDate += standardDays[i] : secondDate += leapDays[i];

	if (firstDate > secondDate)
		cout << "first Date has more days: " << firstDate - secondDate;
	else if (firstDate < secondDate)
		cout << "second Date has more days: " << secondDate - firstDate;
	else
		cout << "Dates don't have differences between the dates";
}
int main() {
	int day1, day2;
	int month1, month2;
	int year1, year2;
	cout << "First Date:" << endl;
	cout << "Day: ";
	cin >> day1;
	cout << "Month: ";
	cin >> month1;
	cout << "Year: ";
	cin >> year1;
	cout << endl << "Second Date:" << endl;
	cout << "Day: ";
	cin >> day2;
	cout << "Month: ";
	cin >> month2;
	cout << "Year: ";
	cin >> year2;
	Date(day1, month1, year1, day2, month2, year2);
	return 0;
}
