#include "../HeaderLib/Header.h"

template <typename T>
void PrintArr(T** arr, int col, int row) {
	for (int i = 0; i < col; i++)
		for(int j = 0; j < row; j++)
			std::cout << arr[i][j] << " ";
	std::cout << std::endl;
}