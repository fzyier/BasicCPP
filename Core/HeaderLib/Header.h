#include <iostream>

struct Vehicle {
public:
	double length;
	double clearance;
	int engine_capacity;
	int engine_power;
	double wheels_diameter;
	std::string color;
	std::string gearbox_type;

	void Initializing() {
		std::cout << "Enter length: ";
		std::cin >> length;
		std::cout << "Enter clearance: ";
		std::cin >> clearance;
		std::cout << "Enter engine capacity: ";
		std::cin >> engine_capacity;
		std::cout << "Enter engine power: ";
		std::cin >> engine_power;
		std::cout << "Enter wheels diameter: ";
		std::cin >> wheels_diameter;
		std::cout << "Enter color: ";
		std::cin >> color;
		std::cout << "Enter gearbox type: ";
		std::cin >> gearbox_type;
	}
	void Print() {
		std::cout << "length: " << length << std::endl;
		std::cout << "clearance: " << clearance << std::endl;
		std::cout << "engine capacity: " << engine_capacity << std::endl;
		std::cout << "engine power: " << engine_power << std::endl;
		std::cout << "wheels diameter: " << wheels_diameter << std::endl;
		std::cout << "color: " << color << std::endl;
		std::cout << "gearbox type: " << gearbox_type << std::endl;
	}
};