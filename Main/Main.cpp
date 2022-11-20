#include "../Core/HeaderLib/Header.h"

int main() {
	const int size = 32;
	char arr[size];
	std::cout << "Enter: ";
	fgets(arr, size, stdin);
	
	int spaces = 0;
	for(char* i = arr; *i; i++)
		if (isspace(*i))
			spaces++;
	std::cout << spaces << " words!" << std::endl;
	return 0;
}