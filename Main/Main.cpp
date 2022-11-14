#include "../Core/HeaderLib/Header.h"
#include "../Core/HeaderLib/Functions.h"

int main() {
	double (*Funcs[4])(double, double) = { Add,Div,Mul,Sub };

	double num1, num2;
	for (int i = 0; i < 4; i++) {
		std::cout << "Enter first double: ";
		std::cin >> num1;
		std::cout << "Enter second double: ";
		std::cin >> num2;

		std::cout << Funcs[i](num1, num2) << std::endl << std::endl;
	}
	return 0;
}