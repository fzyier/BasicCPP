#include "..\Core\Functions\Random.cpp"
#include "..\Core\Functions\MaxSingleArray.cpp"
#include "..\Core\Functions\MaxDoubleArray.cpp"
#include "..\Core\Functions\MaxTripleArray.cpp"
#include "..\Core\Functions\MaxNumber.cpp"

int main() {
	const int size = 10;

	// Task 5.1
	{
		int arr[size];
		Random(arr, size);
		std::cout << MaxSingleArray(arr, size);
		std::cout << std::endl; 
	}
	// Task 5.2
	{
		int arr[size][size];
		Random(arr, size);
		std::cout << MaxDoubleArray(arr, size);
		std::cout << std::endl;
	}
	// Task 5.3
	{
		int arr3[size][size][size];
		Random(arr3, size);
		std::cout << MaxTripleArray(arr3, size);
		std::cout << std::endl;
	}
	// Task 5.4
	{
		int choose;
		std::cout << "1) int\n2) double\n3) char\n>";
		std::cin >> choose;
		switch (choose) {
		case 1: {
			int num1, num2;
			std::cout << "Enter an int: ";
			std::cin >> num1;
			std::cout << "Enter an int: ";
			std::cin >> num2;

			std::cout << MaxNumber(num1, num2);
			break;
		}
		case 2: {
			double num1, num2;
			std::cout << "Enter a double: ";
			std::cin >> num1;
			std::cout << "Enter a double: ";
			std::cin >> num2;

			std::cout << MaxNumber(num1, num2);
			break;
		}
		case 3: {
			char num1, num2;
			std::cout << "Enter a char: ";
			std::cin >> num1;
			std::cout << "Enter a char: ";
			std::cin >> num2;

			std::cout << MaxNumber(num1, num2);
			break;
		}
		}
		std::cout << std::endl;
	}
	// Task 5.5
	{
		int choose;
		std::cout << "1) int\n2) double\n3) char\n>";
		std::cin >> choose;
		switch (choose) {
		case 1: {
			int num1, num2, num3;
			std::cout << "Enter an int: ";
			std::cin >> num1;
			std::cout << "Enter an int: ";
			std::cin >> num2;
			std::cout << "Enter an int: ";
			std::cin >> num3;

			std::cout << MaxNumber(num1, num2, num3);
			break;
		}
		case 2: {
			double num1, num2, num3;
			std::cout << "Enter an double: ";
			std::cin >> num1;
			std::cout << "Enter an double: ";
			std::cin >> num2;
			std::cout << "Enter an double: ";
			std::cin >> num3;

			std::cout << MaxNumber(num1, num2, num3);
			break;
		}
		case 3: {
			char num1, num2, num3;
			std::cout << "Enter an char: ";
			std::cin >> num1;
			std::cout << "Enter an char: ";
			std::cin >> num2;
			std::cout << "Enter an char: ";
			std::cin >> num3;

			std::cout << MaxNumber(num1, num2, num3);
			break;
		}
		}
		std::cout << std::endl;
	}
}