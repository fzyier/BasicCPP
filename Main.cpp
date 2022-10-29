#include <iostream>

using namespace std;

int Func(int num1, int num2, int beginNum = 1, int endNum = 100) {
	if (num1 % beginNum != 0 && num2 % beginNum != 0) {
		if (beginNum == endNum)
			return 0;
		return Func(num1, num2, beginNum+=1);
	}
	else
		return beginNum;
}

int main() {

	cout << Func(8, 16, 3, 100);
	return 0;
}