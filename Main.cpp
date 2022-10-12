#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	const char luC = 218;
	const char ldC = 192;
	const char ruC = 191;
	const char rdC = 217;
		  
	const char ho = 196;
	const char ve = 179;

	srand(time(NULL));

	int first = 0, second = 0;

	first = 1 + rand() % 6;

	second = 1 + rand() % 6;

	string fItem1, fItem2, fItem3;
	string sItem1, sItem2, sItem3;

	if (first == 1 || second == 1) {
		if (first == 1) {
			fItem1 = "     "; 
			fItem2 = "  o  "; 
			fItem3 = "     ";
		}
		if (second == 1) {
			sItem1 = "     ";
			sItem2 = "  o  ";
			sItem3 = "     ";
		}
	}
	if (first == 2 || second == 2) {
		if (first == 2) {
			fItem1 = "     ";
			fItem2 = "o   o";
			fItem3 = "     ";
		}
		if (second == 2) {
			sItem1 = "     ";
			sItem2 = "o   o";
			sItem3 = "     ";
		}
	}
	if (first == 3 || second == 3) {
		if (first == 3) {
			fItem1 = "o   o";
			fItem2 = "     ";
			fItem3 = "  o  ";
		}
		if (second == 3) {
			sItem1 = "o   o";
			sItem2 = "     ";
			sItem3 = "  o  ";
		}
	}
	if (first == 4 || second == 4) {
		if (first == 4) {
			fItem1 = "o   o";
			fItem2 = "     ";
			fItem3 = "o   o";
		}
		if (second == 4) {
			sItem1 = "o   o";
			sItem2 = "     ";
			sItem3 = "o   o";
		}
	}
	if (first == 5 || second == 5) {
		if (first == 5) {
			fItem1 = "o   o";
			fItem2 = "o   o";
			fItem3 = "  o  ";
		}
		if (second == 5) {
			sItem1 = "o   o";
			sItem2 = "o   o";
			sItem3 = "  o  ";
		}
	}
	if(first == 6 || second == 6) {
		if (first == 6) {
			fItem1 = "o   o";
			fItem2 = "o   o";
			fItem3 = "o   o";
		}
		if (second == 6) {
			sItem1 = "o   o";
			sItem2 = "o   o";
			sItem3 = "o   o";
		}
	}
	//User
	//Cube number
	cout << endl << "COMPUTER" << "\t" << "  USER";
	cout << endl << luC << ho << ho << ho << ho << ho << ho << ho << ruC << "\t"
				 << luC << ho << ho << ho << ho << ho << ho << ho << ruC;
	cout << endl << ve << " " << fItem1 << " " << ve << "\t" << ve << " " << sItem1 << " " << ve
		 << endl << ve << " " << fItem2 << " " << ve << "\t" << ve << " " << sItem2 << " " << ve
		 << endl << ve << " " << fItem3 << " " << ve << "\t" << ve << " " << sItem3 << " " << ve;
	cout << endl << ldC << ho << ho << ho << ho << ho << ho << ho << rdC << "\t"
				 << ldC << ho << ho << ho << ho << ho << ho << ho << rdC;
	Sleep(500);
	if (first > second) {
		system("cls");
		cout << endl << "COMPUTER" << "\t" << "  USER";
		cout << endl << luC << ho << ho << ho << ho << ho << ho << ho << ruC << "\t"
			<< luC << ho << ho << ho << ho << ho << ho << ho << ruC;
		cout << endl << ve << " " << "\x1B[32m" + fItem1 + "\033[0m" << " " << ve << "\t" << ve << " " << sItem1 << " " << ve
			<< endl << ve << " " << "\x1B[32m" + fItem2 + "\033[0m" << " " << ve << "\t" << ve << " " << sItem2 << " " << ve
			<< endl << ve << " " << "\x1B[32m" + fItem3 + "\033[0m" << " " << ve << "\t" << ve << " " << sItem3 << " " << ve;
		cout << endl << ldC << ho << ho << ho << ho << ho << ho << ho << rdC << "\t"
			<< ldC << ho << ho << ho << ho << ho << ho << ho << rdC;
	}
	else if (first < second) {
		system("cls");
		cout << endl << "COMPUTER" << "\t" << "  USER";
		cout << endl << luC << ho << ho << ho << ho << ho << ho << ho << ruC << "\t"
			<< luC << ho << ho << ho << ho << ho << ho << ho << ruC;
		cout << endl << ve << " " << fItem1 << " " << ve << "\t" << ve << " " << "\x1B[32m" + sItem1 + "\033[0m" << " " << ve
			<< endl << ve << " " << fItem2 << " " << ve << "\t" << ve << " " << "\x1B[32m" + sItem2 + "\033[0m" << " " << ve
			<< endl << ve << " " << fItem3 << " " << ve << "\t" << ve << " " << "\x1B[32m" + sItem3 + "\033[0m" << " " << ve;
		cout << endl << ldC << ho << ho << ho << ho << ho << ho << ho << rdC << "\t"
			<< ldC << ho << ho << ho << ho << ho << ho << ho << rdC;
	}
	else {
		system("cls");
		cout << endl << "COMPUTER" << "\t" << "  USER";
		cout << endl << luC << ho << ho << ho << ho << ho << ho << ho << ruC << "\t"
			<< luC << ho << ho << ho << ho << ho << ho << ho << ruC;
		cout << endl << ve << " " << "\x1B[31m" + fItem1 + "\033[0m" << " " << ve << "\t" << ve << " " << "\x1B[31m" + sItem1 + "\033[0m" << " " << ve
			<< endl << ve << " " << "\x1B[31m" + fItem2 + "\033[0m" << " " << ve << "\t" << ve << " " << "\x1B[31m" + sItem2 + "\033[0m" << " " << ve
			<< endl << ve << " " << "\x1B[31m" + fItem3 + "\033[0m" << " " << ve << "\t" << ve << " " << "\x1B[31m" + sItem3 + "\033[0m" << " " << ve;
		cout << endl << ldC << ho << ho << ho << ho << ho << ho << ho << rdC << "\t"
			<< ldC << ho << ho << ho << ho << ho << ho << ho << rdC;
	}

	return 0;
}