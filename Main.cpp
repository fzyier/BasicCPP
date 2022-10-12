#include <iostream>
#include <ctime>

using namespace std;

int main() {
	const int firstCol = 5, firstRow = 10;
	const int secondCol = 5, secondRow = 5;

	int firstArr[firstCol][firstRow];
	int secondArr[secondCol][secondRow];

	srand(time(NULL));

	for (int i = 0; i < firstCol; i++) {
		for (int j = 0; j < firstRow; j++)
			firstArr[i][j] = rand() % 51;
	}

	for (int i = 0; i < firstCol; i++) {
		for (int j = 0; j < firstRow; j++)
			cout << " " << firstArr[i][j] << " ";
		cout << "\n";
	}


	return 0;
}