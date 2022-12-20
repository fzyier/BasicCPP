#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <string>
#include "../Core/HeaderLib/Header.h"


int main() {
	char file1_path[] = "file1.txt";
	char file1_text[256];
	FILE* file1 = fopen(file1_path, "r");

	char file2_path[] = "file2.txt";
	FILE* file2 = fopen(file2_path, "w");

	while (fgets(file1_text, 256, file1)) {
		for (int i = 0; file1_text[i] != '\n' && file1_text[i] != '\0'; i++) {
			if ((int)file1_text[i] + 3 > 122)
				file1_text[i] = 97 + ((file1_text[i] + 2) - 122);
			else
				file1_text[i] += 3;
		}
		fputs(file1_text, file2);
	}
	//printf("Enter line: ");
	//scanf("%[^\n]s",file_text);

	//for (size_t i = 0;file_text[i]!='\0'; i++) {
	//	if ((int)file_text[i] + 3 > 122)
	//		file_text[i] = 97 + ((file_text[i] + 2) - 122);
	//	else
	//		file_text[i] += 3;
	//}

	//fputs(file_text, file);
	

	fclose(file1);
	fclose(file2);
	return 0;
} 