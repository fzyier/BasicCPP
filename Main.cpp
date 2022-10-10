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
			if (d < a && d > b) {
				cout << "Alright!";
				break;
			}
			else {
				cout << "Nope!\n";
				continue;
			}
				
		}
		else if (a < b) {
			if (d > a && d < b) {
				cout << "Alrtight!";
				break;
			}
			else {
				cout << "Nope!\n";
				continue;
			}
		}

	} while (true);
	return 0;
}