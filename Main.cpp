#include <iostream>

using namespace std;

int main() {
	int a, b, d;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;

	do
	{
		cout << "Enter D: ";
		cin >> d;

		if (a > b) {
			(d < a&& d > b) ? cout << "Alright!\n" : cout << "Nope!\n";
			break;
		}
		else if (a < b) {
			(d > a && d < b) ? cout << "Alright!\n" : cout << "Nope!\n";
			break;
		}

	} while (true);
	return 0;
}