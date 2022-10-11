#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//1) выбираешь, подряд множення чисел, 10 вопросов.
//2) выбираешь, рандомные числа, 15 вопросов.
//3) рандомно, рандомные числа, 20 вопросов.

int main() {
	int choose;
	cout << "1 - Easy\n2 - Normal\n3 - Hard\n> ";
	cin >> choose;
	int mistakes = 0, num, is, random;
	switch (choose) {
	case 1:
		cout << "Type a number to multiply: ";
		cin >> num;
		for (int i = 1; i <= 10; i++) {
			cout << num << " * " << i << " = ";
			cin >> is;
			if (is != num * i)
				mistakes++;
			else continue;
		};
		cout << mistakes << " mistakes!" << endl;
		break;
	case 2:
		cout << "Type a number to multiply: ";
		cin >> num;
		srand(time(NULL));
		for (int i = 1; i <= 10; i++) {
			random = 1 + rand() % 10;
			cout << num << " * " << random << " = ";
			cin >> is;
			if (is != num * random)
				mistakes++;
			else continue;
		}
		cout << mistakes << " mistakes!" << endl;
		break;
	case 3:
		srand(time(NULL));
		num = 1 + rand() % 1000;
		for (int i = 1; i <= 20; i++) {
			random = 1 + rand() % 10;
			cout << num << " * " << random << " = ";
			cin >> is;
			if (is != num * random)
				mistakes++;
			else continue;
		}
		cout << mistakes << " mistakes!" << endl;
		break;
	default:
		break;
	}
	return 0;
}