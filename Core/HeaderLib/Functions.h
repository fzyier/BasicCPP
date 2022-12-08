template <typename T>
T** RandomFill(uint32_t col, uint32_t row) {
	T** arr = new T * [col];
	for (int i = 0; i < col; i++) {
		arr[i] = new T[row];
		for (int j = 0; j < row; j++)
			arr[i][j] = rand() % 30-15;
	}
	return arr;
}

template <typename T>
void PrintArr(T** arr, int col, int row) {
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}