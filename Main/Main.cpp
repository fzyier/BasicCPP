#include "../Core/HeaderLib/Header.h"

int main() {
	const int size = 32;
	char arr[size];
	fgets(arr, size, stdin);

	for (int i = 0, j = strlen(arr) - 1; i < j; ++i, --j) {
		if (arr[i] == arr[j]) {
			std::cout << "False";
			return 0;
		}

	}
	std::cout << "True";
	
	return 0;
}