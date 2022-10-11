#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main() {
	srand(time(NULL));
	const int size = 20;
	//cout << "Size for an array: ";
	//cin >> size;
	int array[size];
	for (int i = 0; i < size; i++)
		array[i] = rand() % 21 + -10 ;

	for (int i = 0; i < size; i++)
		cout << array[i] << " ";

	return 0;
}