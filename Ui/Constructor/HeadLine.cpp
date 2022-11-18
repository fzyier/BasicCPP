#include "../../Core/HeaderLib/Header.h"
#include "../../Core/HeaderLib/Colors.h"
#include "../../Core/HeaderLib/Constructor.h"

void HeadLine(std::string title, int length) {
	size_t trueNum = length - ReturnTitle(title).length();

	if (length >= ReturnTitle(title).length()) {
		SetColorBlue();
		std::cout << ' ' << ' ' << '#';

		if (trueNum % 2 != 0)
			trueNum = trueNum - 1;

		for (short i = 0; i <= trueNum; i++) {

			if (i == trueNum / 2) {
				std::cout << ReturnTitle(title);
			}

			else
				std::cout << "=";

		}
		std::cout << '#' << std::endl;
		SetColorWhite();

	}
	else {
		SetColorRed();
		std::cout << "Title is too long!" << std::endl;
		SetColorWhite();
	}
}