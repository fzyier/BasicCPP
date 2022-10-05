#include <iostream>

using namespace std;

int main() {
	int x, y, z;
	cout << "Enter x and y: " << endl;
	cin >> x >> y;
	cout << "1 - Even numbers\n2 - Not even numbers\n3 - Multiply to 7" << endl;
	cin >> z;
	switch (z) {
	case 1:
		while (x != y) {
			if (x % 2 == 0) {
				cout << x;
				++x;
			}
			else {
				++x;
				continue;
			}
		}
		break;
	case 2:
		while (x != y) {
			if (x % 2 != 0) {
				cout << x;
				++x;
			}
			else {
				++x;
				continue;
			}
		}
		break;
	case 3:
		while (x != y) {
			if (x % 7 == 0) {
				cout << x;
				++x;
			}
			else {
				++x;
				continue;
			}
		}
		break;
	default:
		cout << "Invalid input" << endl;
		break;
	}
	return 0;
}