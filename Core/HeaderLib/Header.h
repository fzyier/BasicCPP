#include <iostream>
#include <string>

struct WashingMachine
{
private:
	std::string firm;
	std::string color;
	double width;
	double length;
	double height;
	double power;
	double speed;
	double temperature;
public:
	void Print()
	{
		system("cls");
		std::cout << "Firm: " << firm << std::endl;
		std::cout << "Color: " << color << std::endl;
		std::cout << "Width: " << width << std::endl;
		std::cout << "Length: " << length << std::endl;
		std::cout << "Height: " << height << std::endl;
		std::cout << "Power: " << power << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Temperature: " << temperature << std::endl;
	}
	void Input() 
	{
		std::cout << "Firm: "; std::getline(std::cin, firm);
		std::cout << "Color: "; std::getline(std::cin, color);
		std::cout << "Width: "; std::cin >> width;
		std::cout << "Length: "; std::cin >> length;
		std::cout << "Height: "; std::cin >> height;
		std::cout << "Power: "; std::cin >> power;
		std::cout << "Speed: "; std::cin >> speed;
		std::cout << "Temperature: "; std::cin >> temperature;
	}
};