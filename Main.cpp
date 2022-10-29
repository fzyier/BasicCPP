#include <iostream>
#include <string>
using namespace std;

void Output(string cardSuit, string cardNum) {
	const int size = 4;
	char symb[size][2] = { {'h',' \x03'},{'d','\x04'},{'c','\x05'},{'s','\x06'} };

	char suit = NULL;
	for (int i = 0; i < cardSuit.length(); i++) {
		cardSuit[0] = tolower(cardSuit[0]);
		if (cardSuit[0] == symb[i][0])
			suit = symb[i][1];
	}

	cout << "*-----*" << endl;
	(cardNum.length() == 2) ? cout << "|" << cardNum << "   |" << endl 
		: cout << "|" << cardNum << "    |" << endl;
	cout << "|  " << suit << "  |" << endl;
	(cardNum.length() == 2) ? cout << "|   " << cardNum << "|" << endl
		: cout << "|    " << cardNum << "|" << endl;
	cout << "*-----*" << endl;
}
int main() {
	string cardSuit, cardNum;

	cout << '\x03' << " - heart\n" 
		<< '\x04' << " - diamond\n"
		<< '\x05' << " - clubs\n"
		<< '\x06' << " - spades\n"
		<< endl;
	cout << "Enter card suit: ";
	cin >> cardSuit;
	
	cout << endl << "A  K\nQ  J\n2-10\n" << endl;
	cout << "Enter card: ";
	cin >> cardNum;
	
	Output(cardSuit, cardNum);
	return 0;
}