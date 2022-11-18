#include "../HeaderLib/Header.h"
#include "../HeaderLib/Constructor.h"
#include <string>

void MonthProfit(std::string clients[][3], int clients_col, std::string packages[], int packages_prices[], int packages_col) {
	int days = 30;
	int profit = NULL;
	for (int i = 0; i < packages_col; i++) {
		int multiplier = NULL;
		for (int j = 0; j < clients_col; j++)
			if (packages[i] == clients[j][2])
				multiplier++;

		profit += ((packages_prices[i] * multiplier) * days);
	}

	HeadLine("PROFIT", 20);
	Split(' ', 21);
	Line("30 Days", 9, std::to_string(profit) + "$", 11, true);
	Split(' ', 21);
	HeadLine("PROFIT", 20);
}

void MonthProfitByPackage(std::string clients[][3], int clients_col, std::string package, int package_price) {
	int days = 30;
	int profit = NULL;
	
	for (int i = 0; i < clients_col; i++)
		if (clients[i][2] == package)
			profit += package_price;

	HeadLine("PROFIT", 20);
	Split(' ', 21);
	Line(package, 10, std::to_string(profit*days) + "$", 10, true);
	Split(' ', 21);
	HeadLine("PROFIT", 20);
}