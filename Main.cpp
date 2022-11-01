#include <iostream>

using namespace std;

char PlusMinus(int num) {
	return(num >= 0) ? '+' : '-';
}

int main() {
	int* num = new int{};
	cout << "Enter: ";
	cin >> *num;
	cout << PlusMinus(*num);
	delete num;
	return 0;
}