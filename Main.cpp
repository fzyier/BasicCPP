#include <iostream>

using namespace std;

int main() {
	const int length = 12;
	int income[length];
	int money;
	for (int i = 0; i < length; i++) {
		cout << "Enter your profit in the " << i + 1 << " month\n>";
		cin >> money;
		income[i] = money;
	}
	int start, end;
	cout << "Range start: ";
	cin >> start;
	cout << "Range end: ";
	cin >> end;

	int max = income[end-1], min = income[start-1];
	for (int i = start; i < end; i++) {
		if (income[i] > max)
			max = income[i];
		if (income[i] < min)
			min = income[i];
	}
	cout << "min: " <<  min << " max: " << max;
	return 0;
}