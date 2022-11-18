#include "../../Core/HeaderLib/Header.h"
#include <Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void SetColorBrown() {
	SetConsoleTextAttribute(hConsole, 6);
}

void SetColorGreen() {
	SetConsoleTextAttribute(hConsole, 10);
}

void SetColorBlue() {
	SetConsoleTextAttribute(hConsole, 11);
}

void SetColorRed() {
	SetConsoleTextAttribute(hConsole, 12);
}

void SetColorPurple() {
	SetConsoleTextAttribute(hConsole, 13);
}

void SetColorDarkRed() {
	SetConsoleTextAttribute(hConsole, 4);
}

void SetColorWhite() {
	SetConsoleTextAttribute(hConsole, 15);
}