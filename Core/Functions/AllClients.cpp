#include "../HeaderLib/Header.h"
#include "../HeaderLib/Constructor.h"

int MaxLength(std::string arr[][3], int col, int row);

void AllClients(std::string arr[][3], int col, int row) {
	int maxLength = MaxLength(arr, col, row);
	HeadLine("", maxLength + 8);
	Split(' ', maxLength + 8);
	for (int i = 0; i < col; i++) {
		Line("NAME", 7, arr[i][0], maxLength);
		Line("STREET", 7, arr[i][1], maxLength);
		Line("PACKAGE", 7, arr[i][2], maxLength);
		Split(' ', maxLength + 8);
	}
	HeadLine("", maxLength + 8);
}

void AllClientsByPackage(std::string arr[][3], int col, int row, std::string package) {
	int maxLength = MaxLength(arr, col, row);
	std::string copy_package = package;
	for (auto& c : package) c = toupper(c);
	HeadLine(package, maxLength + 9);

	Split(' ', maxLength + 9);
	for (int i = 0; i < col; i++) {
		if (arr[i][2] == copy_package) {
			Line("NAME", 7, arr[i][0], maxLength+1);
			Line("STREET", 7, arr[i][1], maxLength+1);
			Split(' ', maxLength + 9);
		}
	}
	HeadLine(package, maxLength + 9);
	std::cout << std::endl;

}