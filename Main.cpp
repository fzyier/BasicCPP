#include <iostream>

using namespace std;

void HappyNumber(int number) {
	int mult = 1, divi = 1000000;
	int sum1 = 0, sum2 = 0;

	do {
		mult *= 10;
		divi /= 10;

		sum1 += (number % mult) / (mult / 10);
		sum2 += (number / divi) % (10 % (10*mult));
	} while (divi != 1000);

	(sum1 == sum2) ? cout << "Happy Number": cout << "Basic Number";
}

int main() {
	int num;
	cout << "Enter: ";
	cin >> num;

	HappyNumber(num);
	return 0;
}