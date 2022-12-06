#include <iostream>
#include <array>

int mystrlen(const char* str) {
	int length{};
	for (int i = 0; str[i] != '\0'; i++)
		length++;

	return length;
}

char* mystrcpy(char* str1, const char* str2) {
	int size = mystrlen(str2);
	str1 = new char[size + 1];
	for (int i = 0; str2[i] != '\0'; i++)
		str1[i] = str2[i];
	str1[size] = '\0';
	return str1;
}

char* mystrcat(char* str1, const char* str2) {
	int size_str1 = mystrlen(str1);
	int size_str2 = mystrlen(str2);
	for (int i = 0; i <= size_str2 - 1; i++) {
		str1[size_str1 + i] = str2[i];
	}
	str1[size_str1+size_str2] = '\0';
	return str1;
}

char* mystrchr(char* str, char s) {
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == s)
			return &str[i];
	return 0;
}

char* mystrstr(char* str1, char* str2){
	int size = mystrlen(str2);
	for (int i = 0; str1[i] != '\0'; i++)
		if (str1[i] == str2[0])
			for (int j = 1; str2[j] != '\0'; j++) {
				if (str1[i + j] != str2[j])
					break;
				if (j == size-1)
					return &str1[i];
			}
	return 0;
}