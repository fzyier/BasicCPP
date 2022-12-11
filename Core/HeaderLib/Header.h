#include <iostream>
int col_A, row_A;
int col_B, row_B;
int col_C, row_C;

template <typename T>
void PrintArr(T** arr, int col, int row) {
	for (size_t i = 0; i < col; i++) {
		for (size_t j = 0; j < row; j++)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
template <typename T>
void PrintArr(T* arr, int col) {
	for (size_t i = 0; i < col; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

template <typename T>
T** RandomFill(int col, int row) {
	T** arr = new T * [col];
	for (size_t i = 0; i < col; i++) {
		arr[i] = new T[row];
		for (size_t j = 0; j < row; j++)
			arr[i][j] = rand() % 20 - 10;
	}
	PrintArr(arr, col, row);
	return arr;
}

template <typename T>
T* EqualChars(T** A, T** B, T** C) {
	std::string text = "";
	// A Iterations
	for (size_t i = 0; i < col_A; i++) {
		for (size_t j = 0; j < row_A; j++) {
			// B Iterations
			for (size_t k = 0; k < col_B; k++) {
				bool contains = false;
				for (size_t l = 0; l < row_B; l++) {
					if (A[i][j] == B[k][l]) {
						// C Iterations
						for (size_t p = 0; p < col_C; p++) {
							for (size_t g = 0; g < row_C; g++) {
								if (A[i][j] == C[p][g]) {
									text += A[i][j];
									contains = true;
									break;
								}
							}
							if (contains)
							break;
						}
						if (contains)
						break;
					}
				}
				if (contains)
				break;
			}
		}
	}

	T* equal_chars = new T [text.length()];
	for (int i = 0; i < text.length(); i++) {
		equal_chars[i] = text[i];
	}
	PrintArr(equal_chars, text.length());

	return equal_chars;
}

template <typename T>
T* EqualChars(T** A, T** C) {
	std::string text = "";
	for (size_t i = 0; i < col_A; i++) {
		for (size_t j = 0; j < row_A; j++) {
			for (size_t k = 0; k < col_C; k++) {
				bool contains = false;
				for (size_t l = 0; l < row_C; l++) {
					if (A[i][j] == C[k][l]) {
						text += A[i][j];
						contains = true;
						break;
					}
				}
				if (contains)
					break;
			}
		}
	}
	T* equal_chars = new T[text.length()];
	for (int i = 0; i < text.length(); i++) {
		equal_chars[i] = text[i];
	}
	PrintArr(equal_chars, text.length());

	return equal_chars;
}

template <typename T>
std::string ArrCheck(T** A, T** B, T** C, bool negative_s = false, bool contains_s = true) {
	std::string text = "";
	for (size_t i = 0; i < col_A; i++)
	{
		for (size_t j = 0; j < row_A; j++)
		{
			bool contains = false;
			for (size_t k = 0; k < col_B; k++)
			{
				for (size_t l = 0; l < row_B; l++)
				{
					if (A[i][j] == B[k][l] && contains_s == true)
					{
						contains = true;
					}
					if (contains)
					{
						break;
					}
					if (k == col_B - 1 && l == row_B - 1) {
						for (size_t p = 0; p < col_C; p++)
						{
							for (size_t g = 0; g < row_C; g++)
							{
								if (A[i][j] == C[p][g] && contains_s == true)
								{
									contains = true;
								}
								if (contains)
								{
									break;
								}
								if ((negative_s == true) ? p == col_C - 1 && g == row_C - 1 && A[i][j] < 0 : p == col_C - 1 && g == row_C - 1)
								{
									text += A[i][j];
								}
							}
							if (contains)
							{
								break;
							}
						}
					}
				}
				if (contains)
				{
					break;
				}
			}
		}
	}
	return text;
}

template <typename T>
T* DifferentChars(T** A, T** B, T** C) {
	std::string text = "" + ArrCheck(A,B,C) + ArrCheck(B,A,C) + ArrCheck(C,A,B);

	T* equal_chars = new T[text.length()];
	for (int i = 0; i < text.length(); i++) {
		equal_chars[i] = text[i];
	}

	PrintArr(equal_chars, text.length());

	return equal_chars;
}

template <typename T>
T* NegativeChars(T** A, T** B, T** C) {
	std::string text = "" + ArrCheck(A, B, C, true, false) + ArrCheck(B, A, C, true, false) + ArrCheck(C, B, A, true, false);

	for (size_t i = 0; i < text.length(); i++)
	{
		for (size_t j = i+1; j < text.length(); j++)
		{
			if (text[j] == text[i])
			{
				text.erase(text.begin() + j);
			}
		}

	}

	T* equal_chars = new T[text.length()];
	for (int i = 0; i < text.length(); i++) {
		equal_chars[i] = text[i];
	}

	PrintArr(equal_chars, text.length());

	return equal_chars;
}