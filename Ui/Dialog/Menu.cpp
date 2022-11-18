#include "../../Core/HeaderLib/Constructor.h"

void MainMenu() {
	HeadLine("MAIN", 15);
	Line("Clients", 15, true, true, 1);
	Split('-', 15);
	Line("Package", 15, true, true, 2);
	Split('-', 15);
	Line("Profit", 15, true, true, 3);
	Split('-', 15);
	EXIT(15, true, true, 0);
	HeadLine("MAIN", 15);
	
}

void MainClient() {
	HeadLine("CLIENT", 25);
	Line("All Clients", 25, true, true, 1);
	Split('-', 25);
	Line("All Clients By Package", 25, true, true, 2);
	Split('-', 25);
	BACK(25, true, true, 0);
	HeadLine("CLIENT", 25);
}

void MainPackage() {
	HeadLine("PACKAGE", 25);
	Line("Most Popular Package", 25, true, true, 1);
	Split('-', 25);
	BACK(25, true, true, 0);
	HeadLine("PACKAGE", 25);
}

void MainProfit() {
	HeadLine("PROFIT", 35);
	Line("Profit For The Month", 35, true, true, 1);
	Split('-', 35);
	Line("Profit By Package For The Month", 35, true, true, 2);
	Split('-', 35);
	BACK(35, true, true, 0);
	HeadLine("PROFIT", 35);
}