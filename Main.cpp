#include <iostream>

using namespace std;

void Rectangle(int N, int K) {
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++)
			cout << "*";
		cout << endl;
	}
}

int main() {
	int N, K;
	cout << "Enter length: ";
	cin >> N;
	cout << "Enter width: ";
	cin >> K;

	Rectangle(N, K);
	return 0;
}