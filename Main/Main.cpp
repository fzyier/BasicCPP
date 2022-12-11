#include "../Core/HeaderLib/Header.h"
#include <ctime>

int main() {
	srand((unsigned)time(0));

	std::cout << "Col A: ";
	std::cin >> col_A;
	std::cout << "Row A: ";
	std::cin >> row_A;
	int **A = RandomFill<int>(col_A,row_A);

	std::cout << "Col B: ";
	std::cin >> col_B;
	std::cout << "Row B: ";
	std::cin >> row_B;
	int** B = RandomFill<int>(col_B, row_B);

	std::cout << "Col C: ";
	std::cin >> col_C;
	std::cout << "Row C: ";
	std::cin >> row_C;
	int** C = RandomFill<int>(col_C, row_C);

	std::cout << "1: " << std::endl;
	const int* equal_chars = { EqualChars(A, B, C) };
	std::cout << "2: " << std::endl;
	const int* different_chars = { DifferentChars(A, B, C) };
	std::cout << "3: " << std::endl;
	const int* equal_chars_2 = { EqualChars(A, C) };
	std::cout << "4: " << std::endl;
	const int* negative_chars = { NegativeChars(A,B,C) };
}