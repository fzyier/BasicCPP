#include <iostream>
#include <ctime>

using namespace std;

int main() {
	const int col = 3, row = 4;

	int arr[col][row];
	srand(time(NULL));
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			arr[i][j] = 1 + rand() % 10;
		}
	}
	int num = 0;
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			num += arr[i][j];
			(arr[i][j] < 10) ? cout <<" " <<  arr[i][j] << " " : cout << arr[i][j] << " ";
		}
		cout << " " << '|' << " " << num;
		cout << endl;
		num = 0;
	}
	cout << "------------------" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			num += arr[j][i];
		(num < 10) ? cout <<" " << num << " " : cout << num << " ";
		num = 0;
	}
	cout << " |";
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++)
			num += arr[i][j];
	}
	cout << " " << num;
	return 0;
}