#include <iostream>

using namespace std;

 void Cube(int num1, int num2) {
	 if (num1 > num2)
		 cout << num1 << ">" << num2;
	 else if (num1 < num2)
		 cout << num1 << "<" << num2;
	 else
		 cout << num1 << "=" << num2;
}

int main() {
	int num1, num2;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter a number: ";
	cin >> num2;
	Cube(num1,num2);
	return 0;
}