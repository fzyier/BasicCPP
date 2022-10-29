#include <iostream>

using namespace std;

bool PosNeg(int num) {
	return (num > 0) ? true : false;
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << PosNeg(num);

	return 0;
}