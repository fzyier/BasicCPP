#include <iostream>

using namespace std;

void FindPow(int userNum, int num = 1, int power = 1, int max = 100) {
	int chNum = num;
	for (int i = power, k = 1; k <= max; k++) {
		if (chNum == userNum) {
			cout << userNum << " = " << num << "^" << k << endl;
			break;
		}
		chNum *= i;
	}
	if (chNum != userNum)
		return FindPow(userNum, num+1,power+1);
}

int main() {
	int num, power;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter a power of the number: ";
	cin >> power;
	FindPow(pow(num,power));
	return 0;
}