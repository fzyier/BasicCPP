#include <iostream>



int mystrcmp(const char* str1, const char* str2) {
	int size1(0), size2(0);
	for (size_t i = 0; str1[i] != '\0'; i++)
		size1++;
	for (size_t i = 0; str2[i] != '\0'; i++)
		size2++;
	if (size1 == size2)
		return 0;
	else if (size1 > size2)
		return 1;
	else
		return -1;
}

char* StringToNumber(int number) {
	char ch = number+48;
	return &ch;
}