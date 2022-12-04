#include "../Core/HeaderLib/Header.h"
#include "../Core/HeaderLib/Functions.h"

int main() {
	srand(time(0));

	int col_A, row_A;
	std::cout << "Col A: ";
	std::cin >> col_A;
	std::cout << "Col A: ";
	std::cin >> row_A;
	int **A = RandomFill<int>(col_A,row_A);
	PrintArr(A, col_A, row_A);

	int col_B, row_B;
	std::cout << "Col A: ";
	std::cin >> col_B;
	std::cout << "Col A: ";
	std::cin >> row_B;
	int** B = RandomFill<int>(col_B, row_B);
	PrintArr(B, col_B, row_B);

	int col_C, row_C;
	std::cout << "Col C: ";
	std::cin >> col_C;
	std::cout << "Col C: ";
	std::cin >> row_C;
	int** C = RandomFill<int>(col_C, row_C);
	PrintArr(C, col_C, row_C);
}