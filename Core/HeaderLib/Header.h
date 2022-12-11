#include <iostream>

struct ComplexNums {
public:
	int first_numer;
	int second_number;
	void Sum(int num1, int num2) {
		std::cout << "SUM: " << std::endl;
		std::cout << num1 + num2 << std::endl;
	}
	void Sub(int num1, int num2) {
		std::cout << "SUB: " << std::endl;
		std::cout << num1 - num2 << std::endl;
	}
	void Mul(int num1, int num2) {
		std::cout << "MUL: " << std::endl;
		std::cout << num1 * num2 << std::endl;
	}
	void Div(int num1, int num2) {
		std::cout << "DIV: " << std::endl;
		std::cout << num1 / num2 << std::endl;
	}
};