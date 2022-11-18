#include "../../Core/HeaderLib/Header.h"
#include "../../Core/HeaderLib/Colors.h"

int Input() {
	std::cout << std::endl;
	int userInput = 0;
	SetColorBlue();
	std::cout << "#====#" << std::endl;
	std::cout << "#";
	SetColorPurple();
	std::cout <<  "> ";
	SetColorGreen();
	std::cin >> userInput;
	SetColorBlue();
	std::cout << "#====#" << std::endl;
	SetColorWhite();
	std::cout << std::endl;
	return userInput;
}