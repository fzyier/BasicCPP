#include <iostream>

using namespace std;

void Replace(int *num1, int *num2) {
	int num3 = *num1;
	*num1 = *num2;
	*num2 = num3;
}

int main() {
	int* num1 = new int{};
	cout << "Enter: ";
	cin >> *num1;
	int* num2 = new int{};
	cout << "Enter: ";
	cin >> *num2;

	Replace(num1, num2);

	cout << "num1 = " << *num1 << "\nnum2 = " << *num2 << endl;
	delete num1, num2;
	return 0;
}