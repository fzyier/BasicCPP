#include "../Core/HeaderLib/Header.h"
#include "../Core/HeaderLib/Constructor.h"

// # must have a pair!
// HeadLine!

int main() {
	HeadLine(9, "AB");
	Split(10, '-');
	Line(10, "Add");
	Split(10, '-');
	Line(10, "Sub", true);
	Split(10, '-');
	Line(10, "Div", 4);
	Line(10, "Div", 11);
	Split(10, '-');
	Line(10, "Mul", true, 9);
	HeadLine(10, "MAIN");
	std::cout << std::endl;
	HeadLine(16, "SECOND");
	Line("AAAAA", 5, "AAAAAAAAAA", 10);
	return 0;
}