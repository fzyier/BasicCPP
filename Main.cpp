#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	const int col = 6;
	const int row = 2;
	int array[row][col];

	srand(time(0));

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			array[i][j] = rand() % 10;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << array[i][j] << " ";
		cout << "\t" << endl;
	}

	int move;
	cout << "1 - down\n2 - up\n3 - left\n4 - right\n> ";
	cin >> move;

	int value;
	cout << "How many?\n> ";
	cin >> value;

	switch (move) {
	case 1:

		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;
	}

	return 0;
}