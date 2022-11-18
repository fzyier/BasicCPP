#include "../HeaderLib/Header.h"
#include "../HeaderLib/Constructor.h"

void MostPopularPackage(std::string clients[][3], int clients_col, std::string packages[], int packages_col) {
	int global_max = NULL;
	std::string global_name = "";
	for (int i = 0; i < packages_col; i++) {
		int max = 0;

		for (int j = 0; j < clients_col; j++)
			if (packages[i] == clients[j][2])
				max++;

		if (max > global_max) {
			global_max = max;
			global_name = packages[i];
		}
	}
	
	HeadLine("", global_name.length()+4);
	Split(' ', global_name.length()+4);
	Line(global_name, global_name.length()+4, true);
	Split(' ', global_name.length()+4);
	HeadLine("", global_name.length()+4);
}