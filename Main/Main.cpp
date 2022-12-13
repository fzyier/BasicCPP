#include "../Core/HeaderLib/Header.h"

int main() {
	Animal* dog = new Animal;

	Show_Animal* show = new Show_Animal;

	show->action = Input;
	show->action(dog);
	show->action = Print;
	show->action(dog);
	show->action = animal_voice;
	show->action(dog);
}