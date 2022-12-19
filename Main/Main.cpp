#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <string>
#include "../Core/HeaderLib/Header.h"

int main() {
	char file1_path[] = "file1.txt";
	char file1_text[256] = {};
	FILE* file1 = fopen(file1_path, "r");

	char file2_path[] = "file2.txt";
	char file2_text[256] = {};
	FILE* file2 = fopen(file2_path, "r");

	while (fgets(file1_text,256,file1)) {
		fgets(file2_text, 256, file2);

		for (size_t i = 0; i < strlen(file2_text) || i < strlen(file1_text); i++) {
			if (file1_text[i] != file2_text[i]) {
				std::cout << "FILE1: " << file1_text << std::endl;
				std::cout << "FILE2: " << file2_text << std::endl;
				break;
			}
		}
	}

	fclose(file1);
	fclose(file2);
	return 0;
} 