#include "../HeaderLib/Header.h"

void PrintArrays(int A[], int B[], int C[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
		std::cout << B[i] << " ";
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
		std::cout << C[i] << " ";
	std::cout << std::endl;
}