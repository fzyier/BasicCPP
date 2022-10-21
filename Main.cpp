#include <iostream>

using namespace std;
template<typename T1, typename T2>
void TwoNums(T1 num1, T2 num2) {
	if (num1 > num2)
		cout << num1 << ">" << num2;
	else if (num1 < num2)
		cout << num1 << "<" << num2;
	else 
		cout << num1 << "=" << num2;
}
template<typename T1, typename T2, typename T3>
void ThreeNums(T1 num1, T2 num2, T3 num3) {
	if (num1 > num2) {
		if (num1 > num3)
			cout << num1 << ">" << num3 << "," << num2;
		else if (num1 < num3)
			cout << num1 << ">" << num2 << ";" << num1 << "<" << num3;
		else 
			cout << num1 << "=" << num3 << ";" << num1 << ">" << num2;
	}
	else if (num1 < num2) {
		if (num2 < num3)
			cout << num3 << ">" << num1 << "," << num2;
		else if (num2 > num3)
			cout << num2 << ">" << num1 << "," << num3;
		else 
			cout << num3 << "=" << num2 << ";" << num3 << ">" << num1;
	}
	else {
		if (num2 < num3)
			cout << num3 << ">" << num1 << ";" << num1 << "=" << num2;
		else if (num2 > num3)
			cout << num2 << ">" << num3 << "," << num1 << "=" << num2;
		else 
			cout << num3 << "=" << num1 << "," << num2;
	}
}

int main() {
	TwoNums(1, 2);
	ThreeNums(1, 2, 3);
	return 0;
}