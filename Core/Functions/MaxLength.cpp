#include "../HeaderLib/Header.h"

int MaxLength(std::string arr[][3], int col, int row) {
	int max = 0;
	for (int i = 0; i < col; i++)
		for (int j = 0; j < row; j++)
			if (arr[i][j].length() > max)
				max = arr[i][j].length();
	return max;
}