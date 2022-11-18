#include "../../Core/HeaderLib/Header.h"

std::string ReturnTitle(std::string title) {
	if (title != "") {
		std::string copyTitle = " ";

		for (int i = 0; i < title.length(); i++)
			copyTitle = copyTitle + title[i] + ' ';

		return copyTitle;
	}
	else {
		return "";
	}
}