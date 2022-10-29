#include <iostream>

using namespace std;

 int Cube(int num) {
	 return num * num * num;
}

int main() {
	int num;
	cout << "Enter a number" << endl;
	cout << "> ";
	cin >> num;
	cout << Cube(num);
	return 0;
}