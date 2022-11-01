#include <iostream>

using namespace std;

int MinMax(int x, int y) {
	return(x > y) ? x : y;
}

int main() {
	int* FirstNum = new int{};
	int* SecondNum = new int{};

	cout << "Enter a number: ";
	cin >> *FirstNum;
	cout << "Enter a number: ";
	cin >> *SecondNum;

	cout << MinMax(*FirstNum, *SecondNum);
	delete FirstNum;
	delete SecondNum;

	return 0;
}