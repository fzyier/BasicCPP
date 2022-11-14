#include "../../Core/HeaderLib/Header.h"
#include "../../Core/HeaderLib/Colors.h"
#include "../../Core/HeaderLib/Constructor.h"

void HeadLine(short length, std::string title) {
	if (length >= length - ReturnTitle(title).length()) {
		SetColorBlue();
		std::cout << ' ' << ' ' << '#';
		for (short i = 0; i <= length - ReturnTitle(title).length(); i++) {
			if (i != ((length - ReturnTitle(title).length()) / 2))
				(length - ReturnTitle(title).length() == 1) ? std::cout << " " : std::cout << "=";
			else
				std::cout << ReturnTitle(title);
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