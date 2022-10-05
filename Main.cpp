#include <iostream>

using namespace std;

int main() {
	int a, b;

	cout << "Enter a: ";
	cin >> a;

	b = a;
	while (b != 20) {
		b++;
		cout << a << "\n";
		a += b;
	}
	cout << "End: " << a << endl;
	return 0;
}