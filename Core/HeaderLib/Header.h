#include <iostream>
#include <array>


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

int StringToNumber(char* str) {
	return (int)((*str) - 48);
}

char* NumberToString(int number) {
	char ch = number+48;
	return &ch;
}

char* Uppercase(char* str1) {
	for (int i = 0; str1[i] != '\0'; i++)
		str1[i] = str1[i] - 32;
	return str1;
}

char* Lowercase(char* str1) {
	for (int i = 0; str1[i] != '\0'; i++)
		str1[i] = str1[i] + 32;
	return str1;
}

char* mystrrev(char* str) {
	int size = 0;
	for (size_t i = 0; str[i] != '\0'; i++)
		size++;

	for (int i = 0; i < size/2; i++)
		std::swap(str[i],str[size-i]);

	return str;
}

