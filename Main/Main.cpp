#include "../Core/HeaderLib/Header.h"
#include "../Core/HeaderLib/Functions.h"

int main() {
	void (*Funcs[2])(int [], int [], int [], int) = {FillArrays,PrintArrays};

	int size = 0;
	std::cout << "Enter size of arrays: ";
	std::cin >> size;
	int* A = new int[size];
	int* B = new int[size];
	int* C = new int[size];

	for (int i = 0; i < 2; i++)
		Funcs[i](A, B, C, size);

	return 0;
}