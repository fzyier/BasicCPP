#include <iostream>

using namespace std;

int main() {
	const int size = 6;
	int profit[size];

	int income;
	for (int i = 0; i < size; i++) {
		cout << "Enter your income the " << i+1 << " month\n>";
		cin >> profit[i];
	}

	int totalIncome = 0;
	for (int j = 0; j < size; j++)
		totalIncome += profit[j];
	
	cout << "For 6 months: " << totalIncome;

	return 0;
}