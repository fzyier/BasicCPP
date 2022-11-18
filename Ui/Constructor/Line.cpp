#include "../../Core/HeaderLib/Header.h"
#include "../../Core/HeaderLib/Colors.h"

void Line(std::string name, int maxNameLength, bool center = false, bool boolNumeration = false, int numeration = 0) {
	if (maxNameLength < name.length()) {
		SetColorRed();
		std::cout << "Name is longer than maxNameLength!";
		SetColorWhite();
		return;
	}
	if (numeration > 9 || numeration < 0) {
		SetColorRed();
		std::cout << "Numeration must be between 0-9!";
		SetColorWhite();
		return;
	}
	if (boolNumeration == true) {
		std::cout << '|';
		SetColorBrown();
		std::cout << numeration;
		SetColorWhite();
		std::cout << '|';
	}
	else {
		SetColorBlue();
		std::cout << ' ' << ' ' << '|';
	}

	SetColorGreen();
	if (center == true)
		for (int i = 0; i <= maxNameLength - name.length(); i++)
			(((maxNameLength - name.length()) / 2) == i) ? std::cout << name : std::cout << ' ';
	else {
		std::cout << name;
		for (int i = 0; i < maxNameLength - name.length(); i++)
			std::cout << ' ';
	}

	SetColorWhite();
	if (boolNumeration == true) {
		std::cout << '|';
		SetColorBrown();
		std::cout << numeration;
		SetColorWhite();
		std::cout << '|';
	}
	else {
		SetColorBlue();
		std::cout << '|';
	}
	SetColorWhite();
	std::cout << std::endl;
}

void Line(std::string name, int maxNameLength, std::string info, int maxInfoLength, bool center = false, bool boolNumeration = false, int numeration = 0) {
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
	if (numeration > 9 || numeration < 0) {
		SetColorRed();
		std::cout << "Numeration must be between 0-9!";
		SetColorWhite();
		return;
	}

	SetColorBlue();
	if (boolNumeration == true) {
		std::cout << '|';
		SetColorBrown();
		std::cout << numeration;
		SetColorWhite();
		std::cout << '|';
	}
	else
		std::cout << ' ' << ' ' << '|';
		
	SetColorPurple();

	if(center == true)
	for (int i = 0; i <= maxNameLength - name.length(); i++)
		(((maxNameLength - name.length())/2) == i) ? std::cout << name : std::cout << ' ';
	else {
		std::cout << name;
		for (int i = 0; i < maxNameLength - name.length(); i++)
			std::cout << ' ';
	}
	std::cout << ':';

	SetColorGreen();
	if(center == true)
	for (int i = 0; i <= maxInfoLength - info.length(); i++)
		(((maxInfoLength - info.length()) / 2) == i) ? std::cout << info : std::cout << ' ';
	else {
		std::cout << info;
		for (int i = 0; i < maxInfoLength - info.length(); i++)
			std::cout << ' ';
	}

	SetColorBlue();
	if (boolNumeration == true) {
		std::cout << '|';
		SetColorBrown();
		std::cout << numeration;
		SetColorWhite();
		std::cout << '|';
	}
	else
		std::cout << '|';
	SetColorWhite();
	std::cout << std::endl;
}

void BACK(int length, bool center = false, bool boolNumeration = false, int numeration = 0) {
	int backLength = 4;
	if (length < backLength) {
		SetColorRed();
		std::cout << "Length is longer than \"Back\" length!";
		SetColorWhite();
		return;
	}
	if (boolNumeration == true) {
		std::cout << '|';
		SetColorRed();
		std::cout << numeration;
		SetColorWhite();
		std::cout << '|';
	}
	else
		std::cout << ' ' << ' ' << '|';

	SetColorRed();
	if(center == true)
	for (int i = 0; i <= length - backLength; i++)
		(i == (length - backLength) / 2) ? std::cout << "BACK" : std::cout << ' ';
	else {
		std::cout << "BACK";
		for (int i = 0; i <= length - backLength; i++)
			std::cout << ' ';
	}
	SetColorWhite();

	if (boolNumeration == true) {
		std::cout << '|';
		SetColorRed();
		std::cout << numeration;
		SetColorWhite();
		std::cout << '|';
	}
	else
		std::cout << '|';
	std::cout << std::endl;
}
void EXIT(int length, bool center = false, bool boolNumeration = false, int numeration = 0) {
	int backLength = 4;
	if (length < backLength) {
		SetColorRed();
		std::cout << "Length is longer than \"Exit\" length!";
		SetColorWhite();
		return;
	}
	if (boolNumeration == true) {
		std::cout << '|';
		SetColorDarkRed();
		std::cout << numeration;
		SetColorWhite();
		std::cout << '|';
	}
	else
		std::cout << ' ' << ' ' << '|';

	SetColorDarkRed();
	if (center == true)
		for (int i = 0; i <= length - backLength; i++)
			(i == (length - backLength) / 2) ? std::cout << "EXIT" : std::cout << ' ';
	else {
		std::cout << "EXIT";
		for (int i = 0; i <= length - backLength; i++)
			std::cout << ' ';
	}
	SetColorWhite();

	if (boolNumeration == true) {
		std::cout << '|';
		SetColorDarkRed();
		std::cout << numeration;
		SetColorWhite();
		std::cout << '|';
	}
	else
		std::cout << '|';
	std::cout << std::endl;
}