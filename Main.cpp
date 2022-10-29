#include <iostream>

using namespace std;
// 1*2=2 2*3=6
void Factorial(int num) {
	int factorial = 2;
	for (int i = 3; i <= num; i++)
		factorial *= i;
	cout << "Factorial " << factorial << endl;
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	Factorial(num);
	return 0;
}