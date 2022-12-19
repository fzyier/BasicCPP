#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <string>
#include "../Core/HeaderLib/Header.h"


int main() {
	char file_path[] = "file.txt";
	char file_text[256];
	FILE* file = fopen(file_path, "w");

	printf("Enter line: ");
	scanf("%[^\n]s",file_text);

	for (size_t i = 0;file_text[i]!='\0'; i++) {
		if ((int)file_text[i] + 3 > 122)
			file_text[i] = 97 + ((file_text[i] + 3) - 122);
		else
			file_text[i] += 3;
	}

	fputs(file_text, file);
	

	fclose(file);
	return 0;
} 