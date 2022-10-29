#include <iostream>

using namespace std;

void PrimeNum(int num) {
	for (int i = 2; i <= 100; i++) {
		if (num == i)
			continue;
		if (num % i == 0) {
			cout << num << " is NOT a prime number!!";
			return;
		}
	}
	cout << num << " is a prime number!!";
}

int main() {
	int num;
	cout << "Enter a number between 2-100" << endl;
	cout << "> ";
	cin >> num;
	PrimeNum(num);
	return 0;
}