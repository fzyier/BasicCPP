#include "../HeaderLib/Header.h"

void FillArrays(int A[], int B[], int C[], int size) {
	for (int i = 0; i < size; i++)
		A[i] = 5 - rand() % 10;
	for (int i = 0; i < size; i++)
		B[i] = 5 - rand() % 10;
	for (int i = 0; i < size; i++)
		C[i] = A[i] + B[i];
}