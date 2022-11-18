#include "../../Core/HeaderLib/Header.h"
#include "../../Core/HeaderLib/Colors.h"
#include "../../Core/HeaderLib/Constructor.h"

void MenuPackages(std::string packages_name[], int packages_col) {
	HeadLine("PACKAGES", 20);
	for (int i = 0; i < packages_col; i++)
		Line(packages_name[i], 21, true, true, i + 1);
	HeadLine("PACKAGES", 20);
}