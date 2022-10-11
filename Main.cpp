#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	const int col = 6;
	const int row = 2;
	int arr[row][col];

	srand(time(NULL));

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			arr[i][j] = rand() % 10;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << arr[i][j] << " ";
		cout << "\t" << endl;
	}

	int move;
	cout << "1 - right\n2 - left\n3 - up\n4 - down\n> ";
	cin >> move;

	int value;
	cout << "How many?\n> ";
	cin >> value;

	switch (move) {
	case 1:
		for (int i = 0; i < value; i++)
			cout << arr[0][col - (value - i)] << " ";
		for (int i = 0; i < col - value; i++)
			cout << arr[0][i] << " ";
		cout << endl;
		for (int i = 0; i < value; i++)
			cout << arr[1][col - (value - i)] << " ";
		for (int i = 0; i < col - value; i++)
			cout << arr[1][i] << " ";
		break;
	case 2:
		for (int i = value; i < col; i++)
			cout << arr[0][i] << " ";
		for (int i = 0; i < value; i++)
			cout << arr[0][i] << " ";
		cout << endl;
		for (int i = value; i < col; i++)
			cout << arr[1][i] << " ";
		for (int i = 0; i < value; i++)
			cout << arr[1][i] << " ";
		break;
	case 3:
		if (value % 2 == 0) {
			for (int i = 0; i < col; i++) {
				cout << arr[0][i] << " ";
			}
			cout << "\t" << endl;
			for (int i = 0; i < col; i++) {
				cout << arr[1][i] << " ";
			}
		}
		else {
			for (int i = 0; i < col; i++) {
				cout << arr[1][i] << " ";
			}
			cout << "\t" << endl;
			for (int i = 0; i < col; i++) {
				cout << arr[0][i] << " ";
			}
		}
		break;
	case 4:
		if (value % 2 == 0) {
			for (int i = 0; i < col; i++) {
				cout << arr[0][i] << " ";
			}
			cout << "\t" << endl;
			for (int i = 0; i < col; i++) {
				cout << arr[1][i] << " ";
			}
		}
		else {
			for (int i = 0; i < col; i++) {
				cout << arr[1][i] << " ";
			}
			cout << "\t" << endl;
			for (int i = 0; i < col; i++) {
				cout << arr[0][i] << " ";
			}
		}
		break;
	default:
		break;
	}

	return 0;
}