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
		cout << "\n\t" << endl;
	}

	return 0;
}