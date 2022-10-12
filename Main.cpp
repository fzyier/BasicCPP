#include <iostream>

using namespace std;

int main() {

	char symb;
	cout << "Enter symb: ";
	cin >> symb;
	int hor, ver;
	cout << "Horizontal value: ";
	cin >> hor;
	cout << "Vertical value: ";
	cin >> ver;

	for (int i = 1; i <= hor; i++) {
		cout << symb;
	}
	for (int i = 1; i <= ver; i++) {
		cout <<endl<< symb;
		for (int j = 1; j <= hor-2; j++)
			cout << " ";
		cout << symb;
	}
	cout << endl;
	for (int i = 1; i <= hor; i++) {
		cout << symb;
	}
	return 0;
}