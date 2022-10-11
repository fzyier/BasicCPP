#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	cout << "Enter char: ";
	char userChar;
	int line, speed;
	const int length = 10;

	cin >> userChar;
	cout << "1 - horizontally\n2 - vertically" << endl;
	cin >> line;
	cout << "1 - slowly\n2 - normally\n3 - quickly" << endl;
	cin >> speed;

	for (int i = 0; i <= length; i++) {
		if (speed == 1) {
			Sleep(3000);
			(line == 1) ? cout << userChar : cout << userChar << endl;
		}
		else if (speed == 2) {
			Sleep(1500);
			(line == 1) ? cout << userChar : cout << userChar << endl;
		}
		else {
			cout << userChar;
			(line == 1) ? cout << userChar : cout << userChar << endl;
		}
	}
	return 0;
}