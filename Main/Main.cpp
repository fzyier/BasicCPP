#include "../Core/HeaderLib/Header.h"

int main() {
	const char* str1 = { "HELLO!" };
	const char* str2 = { "HELLO!" };

	std::cout << mystrcmp(str1, str2);
	return 0;
}