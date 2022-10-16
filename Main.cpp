#include <iostream>

using namespace std;

void Output(string card) {
	cout << card;
}
int main() {
	string card;
	cout << "Enter: ";
	cin >> card;
	Output(card);
	return 0;
}