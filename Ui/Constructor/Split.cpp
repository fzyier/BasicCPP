#include "../../Core/HeaderLib/Header.h"
#include "../../Core/HeaderLib/Colors.h"

void Split(short length, char fillChar) {
	SetColorBlue();
	std::cout << ' ' << ' ' << '|';
	for (short i = 0; i < length; i++)
		std::cout << fillChar;
	std::cout << "|" << std::endl;
	SetColorWhite();
}