#include "../Core/HeaderLib/Header.h"

int main() {
	Boiler* boiler = new Boiler;
	boiler->Input();
	boiler->Print();
	delete boiler;
}