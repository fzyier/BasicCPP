#include <iostream>

using namespace std;

int main() {
	cout << "What do you want to see?" << endl;
	cout << "0) *** 1) *   2) *** 3)      4) ***" << endl;
	cout << "    **    **      *      *       * " << endl;
	cout << "     *    ***           ***     ***" << endl;
	cout << "                                   " << endl;
	cout << "5) * * 6) *   7)   * 8) ***  9)   *" << endl;
	cout << "   ***    **      **    **       **" << endl;
	cout << "   * *    *        *    *       ***" << endl;

	int a;
	cout << endl << "Enter: ";
	cin >> a;
	for (int i = 0; i <= 2; ++i) {
		for (int j = 0; j <= 2; ++j) {
			switch (a) {
			case 0:(i - j <= 0) ? cout << "*" : cout << " ";
				break;
			case 1:(i - j >= 0) ? cout << "*" : cout << " ";
				break;
			case 2:(i < 1 || i <= 1 && i == j ) ? cout << "*" : cout << " ";
				break;
			case 3:(i > 1 || i >= 1 && i == j) ? cout << "*" : cout << " ";
				break;
			case 4:(i < 1 || i == j || i > 1) ? cout << "*" : cout << " ";
				break;
			case 5:(j == 0 || j == 2 || j == i) ? cout << "*" : cout << " ";
				break;
			case 6:(j == 0 || i == 1 && j != 2) ? cout << "*" : cout << " ";
				break;
			case 7:(j == 2 || i == 1 && j != 0) ? cout << "*" : cout << " ";
				break;
			case 8:(i + j <= 2) ? cout << "*" : cout << " ";
				break;
			case 9:(i + j >= 2) ? cout << "*" : cout << " ";
				break;
			}
		}
		cout << endl;
	}
	return 0;
}