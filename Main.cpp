#include <iostream>

using namespace std;

int Plus(int* num1, int* num2) {
	return *num1 + *num2;
}

int Minus(int* num1, int* num2) {
	return *num1 - *num2;
}

int Multiply(int* num1, int* num2) {
	return *num1 * *num2;
}

int Division(int* num1, int* num2) {
	return *num1 / *num2;
}

int main() {
	int* num1 = new int{};
	cout << "Enter: ";
	cin >> *num1;
	int* num2 = new int{};
	cout << "Enter: ";
	cin >> *num2;

	int choose;
	do {
		cout << "What do you want?" << endl;
		cout << "1) " << *num1 << " + " << *num2 << endl;
		cout << "2) " << *num1 << " - " << *num2 << endl;
		cout << "3) " << *num1 << " * " << *num2 << endl;
		cout << "4) " << *num1 << " / " << *num2 << endl;
		cout << "0) exit" << endl;
		cin >> choose;

		switch (choose) {
		case 1: {
			cout << Plus(num1, num2) << endl;
			break;
		}
		case 2: {
			cout << Minus(num1, num2) << endl;
			break;
		}
		case 3: {
			cout << Multiply(num1, num2) << endl;
			break;
		}
		case 4: {
			cout << Division(num1, num2) << endl;
			break;
		}
		}
	} while (choose != 0);

	delete num1, num2;
	return 0;
}