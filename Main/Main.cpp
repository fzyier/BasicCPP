#include "../Core/HeaderLib/Header.h"
#include "../Core/HeaderLib/Functions.h"
#include <algorithm>

int main() {
	std::string* surnames = FillArray();

	for (int i = 0; i < size; i++)
		std::cout << surnames[i] << " ";
	std::cout << std::endl;

	std::sort(surnames,surnames+size);

	for (int i = 0; i < size; i++)
		std::cout << surnames[i] << " ";

	return 0;
}