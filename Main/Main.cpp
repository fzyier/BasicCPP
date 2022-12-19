#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <string>
#include "../Core/HeaderLib/Header.h"


int main() {
	char file_path[] = "file.txt";
	char file_text[256] = {};
	FILE* file = fopen(file_path, "r");

	size_t letters = 0;
	size_t lines = 0;
	size_t letters_vowel = 0;
	size_t letters_consonant = 0;
	size_t numbers = 0;

	while (fgets(file_text,256,file)) {
		lines++;
		for (size_t i = 0; i < strlen(file_text); i++) {
			if (isdigit(file_text[i]))
				numbers++;

			if (tolower(file_text[i]) == 'a' || tolower(file_text[i]) == 'e' || tolower(file_text[i]) == 'i' ||
				tolower(file_text[i]) == 'o' || tolower(file_text[i]) == 'u')
				letters_vowel++;
			if ((tolower(file_text[i]) != 'a' || tolower(file_text[i]) != 'e' || tolower(file_text[i]) != 'i' ||
				tolower(file_text[i]) != 'o' || tolower(file_text[i]) != 'u') && isalpha(file_text[i]))
				letters_consonant++;
		}
		letters += strlen(file_text);
	}

	std::cout << "Letters: " << letters-lines+1 << std::endl;
	std::cout << "Lines: " << lines << std::endl;
	std::cout << "Vowel letters: " << letters_vowel << std::endl;
	std::cout << "Consonant letters: " << letters_consonant << std::endl;
	std::cout << "Numbers: " << numbers << std::endl;

	fclose(file);
	return 0;
} 