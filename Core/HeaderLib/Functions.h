#include "Header.h"

void AllClients(std::string arr[][3], int col, int row);

void AllClientsByPackage(std::string arr[][3], int col, int row, std::string package);

void MostPopularPackage(std::string clients[][3], int clients_col, std::string packages[], int packages_col);

void MonthProfit(std::string clients[][3], int clients_col, std::string packages[], int packages_prices[], int packages_col);

void MonthProfitByPackage(std::string clients[][3], int clients_col, std::string package, int package_price);