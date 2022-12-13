#include <iostream>
#include <string>

struct Animal
{
public:
	std::string animal_name;
	std::string animal_class;
	std::string animal_nickname;
};

struct Show_Animal
{
public:
	//Animal* animal = nullptr;
	void (*action)(Animal*);
};

void Print(Animal* animal)
{
	system("cls");
	std::cout << "Name: " << animal->animal_name << std::endl;
	std::cout << "Class: " << animal->animal_class << std::endl;
	std::cout << "Nickname: " << animal->animal_nickname << std::endl;

}
void Input(Animal* animal)
{
	std::cout << "Name: "; std::getline(std::cin, animal->animal_name);
	std::cout << "Class: "; std::getline(std::cin, animal->animal_class);
	std::cout << "Nickname: "; std::getline(std::cin, animal->animal_nickname);
}

void animal_voice(Animal* animal) {
	std::string animal_voice;

	std::cout << "Enter voice: ";
	std::getline(std::cin, animal_voice);

	std::cout << animal_voice << "-" << animal_voice << "-" << animal_voice << std::endl;
}