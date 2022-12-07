#include "../HeaderLib/Header.h"

std::string* FillArray() {
	std::string* arr = new std::string[size];
	for (int i = 0; i < size; i++) {
		std::cout << "Enter: ";
		std::getline(std::cin, arr[i]);
	}
	return arr;
}