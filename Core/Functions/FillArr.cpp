#include "../HeaderLib/Header.h"
#include <ctime>

template <typename T>
T** RandomFill(int col, int row) {
	T** arr = new T * [col];
	for (int i = 0; i < col; i++) {
		arr[i] = new T[row];
		for (int j = 0; i < row; j++)
			arr[i][j] = rand() % 30 - 15;
	}
	return arr;
}