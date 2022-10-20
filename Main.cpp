#include <iostream>

using namespace std;

int standardDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int leapDays[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int userDate(string word) {
	int date;
	cout << word + ": ";
	cin >> date;
	return date;
}
int LeapYear(int year) {
	return 366 - (year % 4 > 0);
}
void Date(int day1, int month1, int year1, int day2, int month2, int year2) {
	int firstDate = day1, secondDate = day2;

	if ((month1 < 1 || month1 > 12) || (month2 < 1 || month2 > 12)) {
		cout << "Invalid month.";
		return;
	}
	else if ((day1 < 1 || day1 < (LeapYear(year1) == 365) ? standardDays[month1] : leapDays[month1]) ||
		(day2 < 1 || day2 < (LeapYear(year2) == 365) ? standardDays[month2] : leapDays[month2])) {
		cout << "Invalid day.";
		return;
	}
	else if (year1 < 1 || year2 < 1) {
		cout << "Invalid year.";
		return;
	}

	for (int i = 0; i < month1-1; i++)
		(LeapYear(year1) == 365) ? firstDate += standardDays[i] : firstDate += leapDays[i];

	for(int i = 0; i < month2-1; i++)
		(LeapYear(year2) == 365) ? secondDate += standardDays[i] : secondDate += leapDays[i];

	if (firstDate > secondDate)
		cout << "first Date has more days: " << firstDate - secondDate;
	else if (firstDate < secondDate)
		cout << "second Date has more days: " << secondDate - firstDate;
	else
		cout << "Dates don't have differences between the dates!";
}
int main() {
	Date(userDate("Day"), userDate("Month"), userDate("Year"), userDate("Day"), userDate("Month"), userDate("Year"));
	return 0;
}
