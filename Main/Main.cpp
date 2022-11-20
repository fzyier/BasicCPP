#include "../Core/HeaderLib/Header.h"

int main() {
	char arr[32];
	std::cout << "Enter: ";
	fgets(arr, sizeof(arr), stdin);

	for (char* i = arr; *i; i++)
		if (*i == ' ')
			*i = '\t';

	puts(arr);

	return 0;
}