#include <iostream>
#include <string>

struct Boiler
{
private:
	std::string firm;
	std::string color;
	std::string size;
	double power;
	double temperature;
public:
	void Print()
	{
		system("cls");
		std::cout << "Firm: " << firm << std::endl;
		std::cout << "Color: " << color << std::endl;
		std::cout << "Power: " << power << std::endl;
		std::cout << "Size: " << size << std::endl;
		std::cout << "Maximal temperature: " << size << std::endl;
	}
	void Input()
	{
		std::cout << "Firm: "; std::getline(std::cin, firm);
		std::cout << "Color: "; std::getline(std::cin, color);
		std::cout << "Size: "; std::getline(std::cin, size);
		std::cout << "Power: "; std::cin >> power;
		std::cout << "Temperature: "; std::cin >> temperature;
	}
};