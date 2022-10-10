#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	char client;
	double totalRevenue = 0;
	double pBread = 1.89, pIceCream = 0.50, pCucumber = 0.25, pTomato = 0.44, pOrange = 0.16;
	int vBread = 13, vIceCream = 15, vCucumber = 20, vTomato = 14, vOrange = 15;
	do {
		cout << "\t#>-------------#List#-------------<#\n";
		cout << "\t#    1 >     bread 1.89$           #\n";
		cout << "\t#    2 >   ice cream 0.50$         #\n";
		cout << "\t#    3 >   cucumber 0.25$          #\n";
		cout << "\t#    4 >    tomato 0.44$           #\n";
		cout << "\t#    5 >    orange 0.16$           #\n";
		cout << "\t#                                  #\n";
		cout << "\t#    0 >        exit               #\n";
		cout << "\t#>-------------#List#-------------<#\n";
		cout << endl;

		int productNum, productValue;
		double totalPrice = 0.;
		do {
			cout << "Choose a product: ";
			cin >> productNum;
			switch (productNum) {
			case 1:
				cout << "How many: ";
				cin >> productValue;
				if (productValue <= 0) {
					cout << "Mistake..." << endl;
					break;
				}
				else if (vBread <= 0) {
					cout << "Product is out of stock..." << endl;
					break;
				}
				else if (productValue > vBread) {
					cout << "We have only " << vBread << endl;
					break;
				}
				totalPrice += pBread * productValue;
				vBread -= productValue;
				break;
			case 2:
				cout << "How many: ";
				cin >> productValue;
				if (productValue <= 0) {
					cout << "Mistake..." << endl;
					break;
				}
				else if (vIceCream <= 0) {
					cout << "Product is out of stock..." << endl;
					break;
				}
				else if (productValue > vIceCream) {
					cout << "We have only " << vIceCream << endl;
					break;
				}
				totalPrice += vIceCream * productValue;
				vIceCream -= productValue;
				break;
			case 3:
				cout << "How many: ";
				cin >> productValue;
				if (productValue <= 0) {
					cout << "Mistake..." << endl;
					break;
				}
				else if (vCucumber <= 0) {
					cout << "Product is out of stock..." << endl;
					break;
				}
				else if (productValue > vCucumber) {
					cout << "We have only " << vCucumber << endl;
					break;
				}
				totalPrice += pCucumber * productValue;
				vCucumber -= productValue;
				break;
			case 4:
				cout << "How many: ";
				cin >> productValue;
				if (productValue <= 0) {
					cout << "Mistake..." << endl;
					break;
				}
				else if (vTomato <= 0) {
					cout << "Product is out of stock..." << endl;
					break;
				}
				else if (productValue > vTomato) {
					cout << "We have only " << vTomato << endl;
					break;
				}
				totalPrice += pTomato * productValue;
				vTomato -= productValue;
				break;
			case 5:
				cout << "How many: ";
				cin >> productValue;
				if (productValue <= 0) {
					cout << "Mistake..." << endl;
					break;
				}
				else if (vOrange <= 0) {
					cout << "Product is out of stock..." << endl;
					break;
				}
				else if (productValue > vOrange) {
					cout << "We have only " << vOrange << endl;
					break;
				}
				totalPrice += pOrange * productValue;
				vOrange -= productValue;
				break;
			case 0:
				cout << "Processing..." << endl;
				break;
			default:
				cout << "Mistake, try again..." << endl;
				break;
			}
		} while (productNum != 0);

		cout << "Total price: " << totalPrice << "$" << endl;

		cout << "You have a 0.50$ coupon.\n" << "Do you want to use it?\n" << "(y/n) ";

		char useCoupone;
		cin >> useCoupone;
		if (useCoupone == 'y' || useCoupone == 'Y') {
			totalPrice -= 0.50;
			if (totalPrice < 0) {
				totalPrice == 0.;
			}
		}
		else {
			cout << "Refused" << endl;
		}

		char anotherClient;
		cout << "Another client?\n(y/n) ";
		cin >> anotherClient;
		client = anotherClient;
		
		totalRevenue += totalPrice;
	} while (client != 'n' && client != 'N');

	cout << "The revenue is " << totalRevenue << "$" << endl;

	return 0;
}