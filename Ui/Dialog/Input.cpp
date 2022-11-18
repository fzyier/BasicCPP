#include "../../Core/HeaderLib/Header.h"

int Input() {
	int userInput = 0;
	std::cout << '>';
	std::cin >> userInput;
	return userInput;
}