#include <iostream>
#include <ctime>
#include <iomanip>


inline void Random(int arr[], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 200;
}
inline void Random(double arr[], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + (double)(rand()) / ((double)(RAND_MAX / (200 - 10)));
}
inline void Random(char arr[], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 200;
}