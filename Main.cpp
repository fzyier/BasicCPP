#include <iostream>

using namespace std;

int main() {
	int x, y, z;
	cout << "Enter x and y: " << endl;
	cin >> x >> y;
	cout << "Enter 0 if you want to know: ";
	cin >> z;
	if (z == 0)
		cout << x + y;
	else
		cout << "Ok, you don't want to know";
	return 0;
}