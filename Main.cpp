#include <iostream>

using namespace std;

int main() {
	int x, y;
	cout << "Enter x: ";
	cin >> x;
	y = 0;
	while (y != x) {
		cout << ++y << endl;
	}
	return 0;
}