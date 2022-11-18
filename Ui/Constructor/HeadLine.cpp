#include "../../Core/HeaderLib/Header.h"
#include "../../Core/HeaderLib/Colors.h"
#include "../../Core/HeaderLib/Constructor.h"

void HeadLine(std::string title, int length) {
	int trueNum = length - ReturnTitle(title).length();
	if (length < ReturnTitle(title).length()) {
		SetColorRed();
		std::cout << "Title is too long!" << std::endl;
		SetColorWhite();
	}

	SetColorBlue();
	std::cout << ' ' << ' ' << '#';

	if (trueNum % 2 != 0)
		trueNum = trueNum + 1;

	for (int i = 0; i <= trueNum; i++) {

		if (i == trueNum / 2) {
			std::cout << ReturnTitle(title);
		}

		else
			std::cout << "=";

	}
	std::cout << '#' << std::endl;
	SetColorWhite();
}