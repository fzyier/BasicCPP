#include <iostream>

using namespace std;

int main() {
	float flX;
	int y, z;

	cout << "\t#==============================#" << endl;
	cout << "\t||                            ||" << endl;
	cout << "\t||What do you want to convert?||" << endl;
	cout << "\t||                            ||" << endl;
	cout << "\t|| 1 - USD   2 - EUR          ||" << endl;
	cout << "\t|| 3 - UAH   4 - PLN          ||" << endl;
	cout << "\t||                            ||" << endl;
	cout << "\t|| 0 - exit                   ||" << endl;
	cout << "\t||                            ||" << endl;
	cout << "\t#==============================#" << endl;
	cout << "\n";
	cout << "\t#=====#" << endl;
	cout << "\t> ", cin >> z;
	cout << "\t#=====#" << endl;
	cout << "\n";
	cout << "\t#===========#" << endl;
	cout << "\t#           #" << endl;
	cout << "\t# How many? #" << endl;
	cout << "\t#           #" << endl;
	cout << "\t#===========#" << endl;
	cout << "\n";
	cout << "\t#=====#" << endl;
	cout << "\t> ", cin >> flX;
	cout << "\t#=====#" << endl;
	cout << "\n";

	switch (z) {
	case 1:
		cout << "\t#================#" << endl;
		cout << "\t#                #" << endl;
		cout << "\t# Convert to ... #" << endl;
		cout << "\t#                #" << endl;
		cout << "\t#    1 = EUR     #" << endl;
		cout << "\t#    2 = UAH     #" << endl;
		cout << "\t#    3 = PLN     #" << endl;
		cout << "\t#                #" << endl;
		cout << "\t#================#" << endl;
		cout << "\n";
		cout << "\t#=====#" << endl;
		cout << "\t> ", cin >> y;
		cout << "\t#=====#" << endl;
		cout << "\n";
		if (y == 1) {
			cout << "\t#==EUR==#" << endl;
			cout << "\t> " << flX * 1.03;
			cout << "\n\t#=======#" << endl;
		}
		else if (y == 2) {
			cout << "\t#==UAH==#" << endl;
			cout << "\t> " << flX * 37.17;
			cout << "\n\t#=======#" << endl;
		}
		else if (y == 3) {
			cout << "\t#==PLN==#" << endl;
			cout << "\t> " << flX * 4.90;
			cout << "\n\t#=======#" << endl;
		}
		break;
	case 2:
		cout << "\t#================#" << endl;
		cout << "\t#                #" << endl;
		cout << "\t# Convert to ... #" << endl;
		cout << "\t#                #" << endl;
		cout << "\t#    1 = USD     #" << endl;
		cout << "\t#    2 = UAH     #" << endl;
		cout << "\t#    3 = PLN     #" << endl;
		cout << "\t#                #" << endl;
		cout << "\t#================#" << endl;
		cout << "\n";
		cout << "\t#=====#" << endl;
		cout << "\t> ", cin >> y;
		cout << "\t#=====#" << endl;
		cout << "\n";
		if (y == 1) {
			cout << "\t#==USD==#" << endl;
			cout << "\t> " << flX * 0.97;
			cout << "\n\t#=======#" << endl;
		}
		else if (y == 2) {
			cout << "\t#==UAH==#" << endl;
			cout << "\t> " << flX * 36.1;
			cout << "\n\t#=======#" << endl;
		}
		else if (y == 3) {
			cout << "\t#==PLN==#" << endl;
			cout << "\t> " << flX * 4.75;
			cout << "\n\t#=======#" << endl;
		}
		break;
	case 3:
		cout << "\t#================#" << endl;
		cout << "\t#                #" << endl;
		cout << "\t# Convert to ... #" << endl;
		cout << "\t#                #" << endl;
		cout << "\t#    1 = USD     #" << endl;
		cout << "\t#    2 = EUR     #" << endl;
		cout << "\t#    3 = PLN     #" << endl;
		cout << "\t#                #" << endl;
		cout << "\t#================#" << endl;
		cout << "\n";
		cout << "\t#=====#" << endl;
		cout << "\t> ", cin >> y;
		cout << "\t#=====#" << endl;
		cout << "\n";
		if (y == 1) {
			cout << "\t#==USD==#" << endl;
			cout << "\t> " << flX * 0.027;
			cout << "\n\t#=======#" << endl;
		}
		else if (y == 2) {
			cout << "\t#==EUR==#" << endl;
			cout << "\t> " << flX * 0.028;
			cout << "\n\t#=======#" << endl;
		}
		else if (y == 3) {
			cout << "\t#==PLN==#" << endl;
			cout << "\t> " << flX * 0.13;
			cout << "\n\t#=======#" << endl;
		}
		break;
	case 4:
		cout << "\t#================#" << endl;
		cout << "\t#                #" << endl;
		cout << "\t# Convert to ... #" << endl;
		cout << "\t#                #" << endl;
		cout << "\t#    1 = USD     #" << endl;
		cout << "\t#    2 = EUR     #" << endl;
		cout << "\t#    3 = UAH     #" << endl;
		cout << "\t#                #" << endl;
		cout << "\t#================#" << endl;
		cout << "\n";
		cout << "\t#=====#" << endl;
		cout << "\t> ", cin >> y;
		cout << "\t#=====#" << endl;
		cout << "\n";
		if (y == 1) {
			cout << "\t#==USD==#" << endl;
			cout << "\t> " << flX * 0.2;
			cout << "\n\t#=======#" << endl;
		}
		else if (y == 2) {
			cout << "\t#==EUR==#" << endl;
			cout << "\t> " << flX * 0.021;
			cout << "\n\t#=======#" << endl;
		}
		else if (y == 3) {
			cout << "\t#==UAH==#" << endl;
			cout << "\t> " << flX * 7.59;
			cout << "\n\t#=======#" << endl;
		}
		break;
	case 0:
		exit(0);
	default:
		cout << "\t#===========#" << endl;
		cout << "\t#           #" << endl;
		cout << "\t#  Invalid  #" << endl;
		cout << "\t#   input   #" << endl;
		cout << "\t#           #" << endl;
		cout << "\t#===========#" << endl;
		break;
	}
	return 0;
}