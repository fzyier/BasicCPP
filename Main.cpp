#include <iostream>

using namespace std;

void Between(int begin, int end, int amount = 0) {
	if (begin != end+1) {
		amount += begin; 
		return Between(begin+1, end, amount);
	}
	else
		cout << "TA DA!!" << endl << amount;
}

int main() {
	int begin = 0, end = 0;
	cout << "Enter a begin: ";
	cin >> begin;
	cout << "Enter an end: ";
	cin >> end;
	Between(begin, end);
	return 0;
}