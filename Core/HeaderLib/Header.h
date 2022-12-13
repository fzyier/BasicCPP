#include <iostream>
#include <string>

struct Iron
{
private:
	std::string firm;
	std::string color;
	std::string model;
	double width;
	double height;
	double power;
	double speed;
	double temperature_min;
	double temperature_max;
	bool smoke;
public:
	void Print()
	{
		system("cls");
		std::cout << "Firm: " << firm << std::endl;
		std::cout << "Model: " << model << std::endl;
		std::cout << "Color: " << color << std::endl;
		std::cout << "Width: " << width << std::endl;
		std::cout << "Height: " << height << std::endl;
		std::cout << "Power: " << power << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Minimal temperature: " << temperature_min << std::endl;
		std::cout << "Maximal temperature: " << temperature_max << std::endl;
		std::cout << "Smoke: " << smoke << std::endl;
	}
	void Input()
	{
		std::cout << "Firm: "; std::getline(std::cin, firm);
		std::cout << "Model: "; std::getline(std::cin, model);
		std::cout << "Color: "; std::getline(std::cin, color);
		std::cout << "Width: "; std::cin >> width;
		std::cout << "Height: "; std::cin >> height;
		std::cout << "Power: "; std::cin >> power;
		std::cout << "Speed: "; std::cin >> speed;
		std::cout << "Minimal temperature: "; std::cin >> temperature_min;
		std::cout << "Maximal temperature: "; std::cin >> temperature_max;
		std::cout << "Smoke: "; std::cin >> smoke;
	}
};