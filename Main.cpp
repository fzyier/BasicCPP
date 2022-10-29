#include <iostream>

using namespace std;

 int Cube(int num) {
	 return num * num * num;
}

int main() {
	int num1;
	cout << "Enter a number: ";
	cin >> num1;
	cout << Cube(num1);
	return 0;
}