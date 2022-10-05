#include <iostream>

using namespace std;

int main() {
	int x, y, z;
	cout << "Enter x and y: " << endl;
	cin >> x >> y;
	z = x;
	while (z != y) {
		z++;
		x = x + z;
		cout << x << " ";
	}
	return 0;
}