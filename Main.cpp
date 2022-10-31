#include <iostream>

using namespace std;

void FindPow(int userNum, int num = 1, int power = 1, int max = 100) {
	int chNum = 0;
	for(int i = power; i <= max; i++)
		if (pow(num, i) == userNum) {
			chNum = (int)pow(num, power);
			cout << userNum << " = " << num << "^" << i << endl;
			break;
		}
	if (chNum != userNum)
		return FindPow(userNum, num++);
}

int main() {
	int num, power;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter a power of the number: ";
	cin >> power;
	FindPow(num);
	return 0;
}