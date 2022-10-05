#include <iostream>

using namespace std;

int main() {
	int a, b;

	a = 20;
	b = a;
	while (b != 1000) {
		b++;
		cout << a << "\n";
		a += b;
	}
	cout << "End: " << a << endl;
	cout << "a / 1000 = " << a / 1000 << endl;
	return 0;
}