#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	srand(time(0));
	cout << "\x1B[31mComputer dice.\033[0m\t\t" << endl;
	Sleep(500);
	cout << "\x1B[31mComputer dice..\033[0m\t\t" << endl;
	Sleep(500);
	cout << "\x1B[31mComputer dice...\033[0m\t\t" << endl;
	Sleep(500);
	int first = 0, second = 0;
	for (int i = 1; i <= 6; i++) {
		first += 1 + rand() % 6;
	}
	cout << "\x1B[32m" << first << "\033[0m\t\t" << endl;
	Sleep(500);
	for (int i = 1; i <= 6; i++) {
		second += 1 + rand() % 6;
	}
	cout << "\x1B[31mUser dice.\033[0m\t\t" << endl;
	Sleep(500);
	cout << "\x1B[31mUser dice..\033[0m\t\t" << endl;
	Sleep(500);
	cout << "\x1B[31mUser dice...\033[0m\t\t" << endl;
	cout << "\x1B[32m" << second << "\033[0m\t\t" << endl;
	Sleep(500);
	system("cls");
	while (true) {
		if (first > second) {
			for (;;) {
				cout << "\x1B[36m" << "-_-_-_-_-_-_-_" << "\033[0m\t\t"
					<< "\033[1;47;35m" << "\nCOMPUTER WON" << "\033[0m\t\t\n"
					<< "\x1B[36m" << "-_-_-_-_-_-_-_" << "\033[0m\t\t";
				Sleep(500);
				system("cls");
				cout << "\x1B[36m" << "_-_-_-_-_-_-_-_" << "\033[0m\t\t"
					<< "\033[1;47;35m" << "\nCOMPUTER WON" << "\033[0m\t\t\n"
					<< "\x1B[36m" << "_-_-_-_-_-_-_-_" << "\033[0m\t\t";
				Sleep(500);
				system("cls");
			}
		}
		else if (first < second) {
			for (;;) {
				cout << "\x1B[36m" << "-_-_-_-_-_-_-_" << "\033[0m\t\t"
					<< "\033[1;47;35m" << "\nUSER WON" << "\033[0m\t\t\n"
					<< "\x1B[36m" << "-_-_-_-_-_-_-_" << "\033[0m\t\t";
				Sleep(500);
				system("cls");
				cout << "\x1B[36m" << "_-_-_-_-_-_-_-_" << "\033[0m\t\t"
					<< "\033[1;47;35m" << "\nUSER WON" << "\033[0m\t\t\n"
					<< "\x1B[36m" << "_-_-_-_-_-_-_-_" << "\033[0m\t\t";
				Sleep(500);
				system("cls");
			}
		}
		else {
			for (;;) {
				cout << "\x1B[36m" << "-_-_-_-_-_-_-_" << "\033[0m\t\t"
					<< "\033[1;47;35m" << "\nA DRAW" << "\033[0m\t\t\n"
					<< "\x1B[36m" << "-_-_-_-_-_-_-_" << "\033[0m\t\t";
				Sleep(500);
				system("cls");
				cout << "\x1B[36m" << "_-_-_-_-_-_-_-_" << "\033[0m\t\t"
					<< "\033[1;47;35m" << "\nA DRAW" << "\033[0m\t\t\n"
					<< "\x1B[36m" << "_-_-_-_-_-_-_-_" << "\033[0m\t\t";
				Sleep(500);
				system("cls");
			}

		}
	}
	return 0;
}