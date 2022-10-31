#include <iostream>

using namespace std;

void Star(int N, int value = 0) {
	if (N != value) {
		cout << "*";
		return Star(N, value + 1);
	}
	else
		return;
}

int main() {
	int N = 0;
	cout << "Enter a value: ";
	cin >> N;
	Star(N);
	return 0;
}