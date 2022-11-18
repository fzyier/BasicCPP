#include "../Core/HeaderLib/Interface.h"
#include "../Core/HeaderLib/Functions.h"
#include "../Core/HeaderLib/Data.h"
#include <Windows.h>

int main() {
	int input = NULL;

	do {
		Sleep(200);
		MainMenu();
		input = Input();
		switch (input) {
			// Client's menu of funtions
		case 1: {
			int secondInput = NULL;
			do {
				system("cls");
				Sleep(200);
				MainClient();
				secondInput = Input();
				switch (secondInput) {
				case 1: {
					Sleep(500);
					AllClients(clients, clients_col, clients_row);
					system("pause");
					break;
				}
				case 2: {
					Sleep(200);
					system("cls");
					MenuPackages(packages_names, packages_col);
					int thirdInput = Input();
					switch (thirdInput) {
					case 1: {
						Sleep(500);
						AllClientsByPackage(clients, clients_col, clients_row, *standard);
						system("pause");
						break;
					}
					case 2: {
						Sleep(500);
						AllClientsByPackage(clients, clients_col, clients_row, *premium);
						system("pause");
						break;
					}
					case 3: {
						Sleep(500);
						AllClientsByPackage(clients, clients_col, clients_row, *lux);
						system("pause");
						break;
					}
					}
					break;
				}
				case 0: {
					Sleep(200);
					system("cls");
					break;
				}
				}
			} while (secondInput != 0);
			break;
		}
			// Package's menu of functions
		case 2: {
			int secondInput = NULL;
			do {
				system("cls");
				Sleep(200);
				MainPackage();
				secondInput = Input();
				switch (secondInput) {
				case 1: {
					Sleep(500);
					MostPopularPackage(clients, clients_col, packages_names, packages_col);
					system("pause");
					break;
				}
				case 0: {
					Sleep(200);
					system("cls");
					break;
				}
				}
			} while (secondInput != 0);
			break;
		}
			// Profit's menu of functions
		case 3: {
			int secondInput = NULL;
			do {
				system("cls");
				Sleep(200);
				MainProfit();
				secondInput = Input();
				switch (secondInput) {
				case 1: {
					Sleep(500);
					MonthProfit(clients, clients_col, packages_names, packages_prices, packages_col);
					system("pause");
					break;
				}
				case 2: {
					system("cls");
					Sleep(200);
					MenuPackages(packages_names, packages_col);
					int thirdInput = Input();
					switch (thirdInput) {
					case 1: {
						Sleep(500);
						MonthProfitByPackage(clients, clients_col, *standard, *standard_price);
						system("pause");
						break;
					}
					case 2: {
						Sleep(500);
						MonthProfitByPackage(clients, clients_col, *premium, *premium_price);
						system("pause");
						break;
					}
					case 3: {
						Sleep(500);
						MonthProfitByPackage(clients, clients_col, *lux, *lux_price);
						system("pause");
						break;
					}
					}
					break;
				}
				case 0: {
					Sleep(200);
					system("cls");
					break;
				}
				}
			} while (secondInput != 0);
			break;
		}
		}
	} while (input != 0);

	return 0;
}