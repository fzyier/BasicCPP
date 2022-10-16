#include <iostream>

using namespace std;

int Sum(int num1, int num2) {
	int num = 0;
	for (int i = num1 + 1; i < num2; i++)
		num += i;
	return num;
}
int main() {
	cout << Sum(1, 5);
	return 0;
}