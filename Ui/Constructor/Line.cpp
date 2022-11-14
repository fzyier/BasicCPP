#include "../../Core/HeaderLib/Header.h"
#include "../../Core/HeaderLib/Colors.h"

//		   |___      |
void Line(short length, std::string name) {
	if (length >= length - name.length()) {
		SetColorBlue();
		std::cout << ' ' << ' ' << '|';
		SetColorGreen();
		std::cout << name;
		SetColorBlue();
		for (short i = 0; i < length - name.length(); i++)
			std::cout << " ";

		std::cout << '|' << std::endl;
		SetColorWhite();
	}
	else {
		SetColorRed();
		std::cout << "Name is longer than length!" << std::endl;
		SetColorWhite();
	}
}

//		   |   ___   |
void Line(short length, std::string name, bool center) {
	if (length >= length - name.length()) {
		SetColorBlue();
		std::cout << ' ' << ' ' << '|';
		for (short i = 0; i <= length - name.length(); i++) {
			if (i == (length - name.length())/2) {
				SetColorGreen();
				std::cout << name;
				SetColorBlue();
			}
			else
				std::cout << " ";
		}

		std::cout << '|' << std::endl;
		SetColorWhite();
	}
	else {
		SetColorRed();
		std::cout << "Name is longer than length!" << std::endl;
		SetColorWhite();
	}
}

//		 |_|___      |_|
void Line(short length, std::string name, int numeration) {
		if (numeration > 10) {
			SetColorRed();
			std::cout << "Numeration is more than 9!" << std::endl;
			SetColorWhite();
			return;
		}

		if (length >= length - name.length()) {
			SetColorBlue();
			std::cout << '|'; 
			SetColorBrown();
			std::cout << numeration; 
			SetColorBlue();
			std::cout << '|';
			SetColorGreen();
			std::cout << name;
			SetColorBlue();
			for (short i = 0; i < (length - name.length()); i++)
				std::cout << " ";

			SetColorBlue();
			std::cout << '|';
			SetColorBrown();
			std::cout << numeration;
			SetColorBlue();
			std::cout << '|';
			std::cout << std::endl;
			SetColorWhite();
		}
		else {
			SetColorRed();
			std::cout << "Name is longer than length!" << std::endl;
			SetColorWhite();
		}
}

//		 |_|   ___   |_|
void Line(short length, std::string name, bool center, int numeration) {
	if (numeration > 10) {
		SetColorRed();
		std::cout << "Numeration is more than 9!" << std::endl;
		SetColorWhite();
		return;
	}

	if (length >= length - name.length()) {
		SetColorBlue();
		std::cout << '|';
		SetColorBrown();
		std::cout << numeration;
		SetColorBlue();
		std::cout << '|';

		for (short i = 0; i <= (length - name.length()); i++) {
			if (i == (length - name.length()) / 2) {
				SetColorGreen();
				std::cout << name;
				SetColorBlue();
			}
			else
				std::cout << " ";
		}

		SetColorBlue();
		std::cout << '|';
		SetColorBrown();
		std::cout << numeration;
		SetColorBlue();
		std::cout << '|';
		std::cout << std::endl;
		SetColorWhite();
	}
	else {
		SetColorRed();
		std::cout << "Name is longer than length!" << std::endl;
		SetColorWhite();
	}
}

//				 |___      |___      |
void Line(std::string name, short maxNameLength, std::string info, short maxInfoLength) {
	if (name.length() > maxNameLength) {
		SetColorRed();
		std::cout << "Name is longer than maxNameLength!";
		SetColorWhite();
		return;
	}
	if (info.length() > maxInfoLength) {
		SetColorRed();
		std::cout << "Info is longer than maxInfoLength!";
		SetColorWhite();
		return;
	}
	SetColorBlue();
	std::cout << ' ' << ' ' << '|';
	SetColorPurple();
	std::cout << name;
	for(short i = 0; i < maxNameLength-name.length(); i++)
		std::cout << ' ';
	std::cout << ':';
	SetColorGreen();
	std::cout << info;
	for (short i = 0; i < maxInfoLength - info.length(); i++)
		std::cout << ' ';
	SetColorBlue();
	std::cout << '|';
	SetColorWhite();
	std::cout << std::endl;
}

//		   |   ___   |   ___   |


//		 |_|___      |___      |_|


//		 |_|   ___   |   ___   |_|