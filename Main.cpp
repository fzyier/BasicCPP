#include <iostream>

using namespace std;

void HappyNumber(int number) {
	int number_copy = number;
	int move = 100000;
	int sum1 = 0, sum2 = 0;
	do {
		number /= 10;
		number_copy %= move;
		move /= 10;
	} while (number / 1000);
	if (sum1 == sum2)
		cout << "Happy Number";
	else
		cout << "Basic Number";
}

void NumberHappy(int num) {
	num /= 10;
	num %= 10;
	cout << num;
}

int main() {
	int num = 123456;
	//cout << "Enter: ";
	//cin >> num;
	HappyNumber(num);
	return 0;
}