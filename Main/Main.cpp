#include "../Core/HeaderLib/Header.h"

int main() {
	const int size = 32;
	char arr[size];
	fgets(arr, size, stdin);

	int digits = 0, alphas = 0, other = 0;
	for (char* i = arr; *i; i++) {
		if (isdigit(*i))
			digits++;
		else if (isalpha(*i))
			alphas++;
		else
			other++;
	}

	std::cout << "Digits = " << digits << std::endl;
	std::cout << "Alphas = " << alphas << std::endl;
	std::cout << "Other = " << other << std::endl; // '/0' is a symbol.
	return 0;
}